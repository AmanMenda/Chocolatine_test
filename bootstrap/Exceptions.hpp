/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Exceptions
*/

#pragma once

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <string>
#include <exception>
#include <iostream>

#define EXCEPTION(ExceptionName)                                        \
    class ExceptionName : public std::exception                         \
    {                                                                   \
        public:                                                         \
            ExceptionName(const std::string& message)                   \
                : _message(message) {}                                  \
                                                                        \
            const char *what() const noexcept                           \
            {                                                           \
                return _message.c_str();                                \
            }                                                           \
                                                                        \
        protected:                                                      \
            std::string _message;                                       \
    };

/**
 * @brief Error class to manage errors
 * 
 */
class Error
{
    public:
        static void argumentError(int argc, char *argv[])
        {
            std::cout << "To be implemented\n";
        }

        static void printUsage(void)
        {
            std::cout << "To be implemented\n";
        }

        EXCEPTION(RegistryErrorComponentNotFound);
};

#endif /* !EXCEPTIONS_HPP */