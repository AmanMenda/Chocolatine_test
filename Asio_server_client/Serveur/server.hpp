/*
** EPITECH PROJECT, 2023
** server.hpp
** File description:
** server.hpp
*/

#ifndef SERVER_HPP_
#define SERVER_HPP_
#include <iostream>
#include <exception>
#include <boost/asio.hpp>
#include <boost/asio/spawn.hpp>
#include <unordered_set>

class server {

    private:
        boost::asio::io_context ioContext;
        // boost::asio::yield_context &yield;
        // boost::asio::ip::udp::socket socket;
        std::unordered_set<boost::asio::ip::udp::endpoint> all_clients;

    public:
        server();
        ~server();
        void send_request(int numberToSend, boost::asio::ip::udp::socket &socket,
                boost::asio::ip::udp::endpoint &clientEndpoint, 
                boost::asio::yield_context &yield);
        void treat_informations(int &receivedNumber, boost::asio::ip::udp::socket &socket,
                        boost::asio::ip::udp::endpoint &clientEndpoint,
                        boost::asio::yield_context &yield);
        void receive_informations(boost::asio::ip::udp::socket &socket,
                        boost::asio::ip::udp::endpoint &clientEndpoint,
                        boost::asio::yield_context &yield);
                        
        class Error : public std::exception {
            private:
                std::string data;
            public:
                Error(std::string str) {data = str;};
                ~Error() {};
                const char* what() const throw();
        }; 
};


#endif /* !SERVER_HPP_ */
