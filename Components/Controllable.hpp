/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Controllable
*/

#pragma once

#include "SFML/Window/Keyboard.hpp"

struct Controllable
{
    sf::Keyboard::Key up = sf::Keyboard::Up;
    sf::Keyboard::Key right = sf::Keyboard::Right;
    sf::Keyboard::Key down = sf::Keyboard::Down;
    sf::Keyboard::Key left = sf::Keyboard::Left;
};