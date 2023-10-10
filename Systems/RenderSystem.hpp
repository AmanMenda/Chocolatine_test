/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** RenderSystem
*/

#pragma once

#include <SFML/Graphics.hpp>

#include "../Components/Transform.hpp"
#include "../Components/Drawable.hpp"

#include "../Core/utilities.hpp"
#include "../Core/Mediator.hpp"
#include "../Core/System.hpp"

#define framePerSeconds 60

class RenderSystem: public System 
{
    public:
        RenderSystem(std::set<Entity>& _entities)
        {
            _entitiesList = _entities;
        }

        void Start(sf::RenderWindow& window);
        void Update(Mediator &mediator);

    private:
        sf::RenderWindow *_window;
};
