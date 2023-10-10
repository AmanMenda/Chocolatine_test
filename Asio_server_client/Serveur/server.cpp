/*
** EPITECH PROJECT, 2023
** R-type
** File description:
** Asio server
*/

#include "server.hpp"

const char* server::Error::what() const throw() {
    return data.c_str();
}

void server::send_request(int numberToSend, boost::asio::ip::udp::socket &socket,
                boost::asio::ip::udp::endpoint &clientEndpoint, 
                boost::asio::yield_context &yield) {

    std::vector<uint8_t> dataToSend(sizeof(numberToSend));
    std::memcpy(dataToSend.data(), &numberToSend, sizeof(numberToSend));
    socket.async_send_to(boost::asio::buffer(dataToSend), clientEndpoint, yield);

}

void server::treat_informations(int &receivedNumber, boost::asio::ip::udp::socket &socket,
                        boost::asio::ip::udp::endpoint &clientEndpoint,
                        boost::asio::yield_context &yield) {
    
    if (receivedNumber == 1000) {
        std::cout << "Déconnexion du client " << clientEndpoint << std::endl;
        this->all_clients.erase(clientEndpoint);

        for (auto client : all_clients) {
            this->send_request(5000, socket, client, yield);
        }

    } else {
        this->send_request(receivedNumber, socket, clientEndpoint, yield);
    }

}

void server::receive_informations(boost::asio::ip::udp::socket &socket,
                        boost::asio::ip::udp::endpoint &clientEndpoint,
                        boost::asio::yield_context &yield) {

    char buffer[1024];

    std::size_t bytesRead = socket.async_receive_from(boost::asio::buffer(buffer), clientEndpoint, yield);

    this->all_clients.insert(clientEndpoint);

    // if (bytesRead == sizeof(int)) {
        int receivedNumber;
        std::memcpy(&receivedNumber, buffer, sizeof(receivedNumber));
        this->treat_informations(receivedNumber, socket, clientEndpoint, yield);

    // } else {
    //     std::cerr << "Données reçues incomplètes." << std::endl;
    // }
}

server::server() {
    
    boost::asio::ip::udp::socket socket(ioContext, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 8080));

    boost::asio::spawn(ioContext, [&socket, this](boost::asio::yield_context yield) {
        try {
            while (true) {

                boost::asio::ip::udp::endpoint clientEndpoint;

                this->receive_informations(socket, clientEndpoint, yield);
            }
        } catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    });
       
    ioContext.run();
}

server::~server()
{
}

int main(int ac, char **av) {
    server myServer;
    return 0;
}

