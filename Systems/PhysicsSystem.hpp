/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** PhysicsSystem
*/

#pragma once

#include <SFML/Graphics.hpp>

#include "../Components/Transform.hpp"
#include "../Components/Physics.hpp"

#include "../Core/utilities.hpp"
#include "../Core/Mediator.hpp"
#include "../Core/System.hpp"

class PhysicsSystem : public System
{
    public:
        void Start();
        void Update(Mediator &mediator, float deltaTime);
    private:
};
