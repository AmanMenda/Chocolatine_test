/*
** EPITECH PROJECT, 2023
** R-type
** File description:
** Asio client
*/

#include <iostream>
#include <boost/asio.hpp>
#include <csignal>

volatile std::sig_atomic_t ctrl_c = false;

void signal_handler(int) {
    ctrl_c = true;
}

void send_request(int numberToSend, boost::asio::ip::udp::socket &socket, boost::asio::ip::udp::endpoint &serverEndpoint) {
    std::vector<uint8_t> dataToSend(sizeof(numberToSend));
    std::memcpy(dataToSend.data(), &numberToSend, sizeof(numberToSend));
    socket.send_to(boost::asio::buffer(dataToSend), serverEndpoint);
}

void receive_response(boost::asio::ip::udp::socket &socket, boost::asio::ip::udp::endpoint &serverEndpoint) {
    char buffer[1024];
    size_t bytesRead = socket.receive_from(boost::asio::buffer(buffer), serverEndpoint);

    int receivedNumber;
    std::memcpy(&receivedNumber, buffer, sizeof(receivedNumber));
    std::cout << "Server response: " << receivedNumber << std::endl;
}

int main(int ac, char **av) {

    std::signal(SIGINT, signal_handler);
    
    try {
        boost::asio::io_context ioContext;
        boost::asio::ip::udp::socket socket(ioContext, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 0));

        //exemple avec l'adresse IP de mon pc (a changer (a mettre en parametre))
        boost::asio::ip::udp::endpoint serverEndpoint(boost::asio::ip::address::from_string(av[1]), 8080);

        while (true) {
            std::cout << "Enter a command (or 'quit' to exit): ";
            std::string command;
            std::getline(std::cin, command);

            if (command == "quit" || ctrl_c == true) {
                send_request(1000, socket, serverEndpoint);
                socket.close();
                break;
            } else {
                send_request(1001, socket, serverEndpoint);
            }

            receive_response(socket, serverEndpoint);
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
