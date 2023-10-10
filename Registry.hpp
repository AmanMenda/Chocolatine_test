/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Sfml
*/

#pragma once

#include <memory>
#include "SFML/Graphics.hpp"
#include "Systems/RenderSystem.hpp"
#include "Systems/ControllableSystem.hpp"

class RegisteredSystems
{
    public:
        std::shared_ptr<RenderSystem> renderSystem;
        std::shared_ptr<ControllableSystem> controllableSystem;
};

/*class Sfml {
    public:
        void createWindow()
        {
            _window = std::make_unique<sf::RenderWindow>(sf::VideoMode(_windowWidth, _windowHeight), "R-Type", sf::Style::Default);
            _window->setVerticalSyncEnabled(true);
        }

        void handleEvents()
        {
            while (_window->pollEvent(_evt))
            {
                if (_evt.type == sf::Event::Closed)
                    _window->close();
            }
        }
        
        void destroyWindow()
        {
            _window->~RenderWindow();
            _window.reset();
        }

    public:
        std::unique_ptr<sf::RenderWindow> _window;
        sf::Clock _clock;
        sf::Time _time;
        sf::Event _evt;

    private:
        unsigned int _windowWidth = 800;
        unsigned int _windowHeight = 600;

};*/
