/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** ControllableSystem
*/

#pragma once

#include "../Components/Controllable.hpp"
#include "../Components/Transform.hpp"
#include "../Components/Physics.hpp"

#include "../Core/utilities.hpp"
#include "../Core/Mediator.hpp"
#include "../Core/System.hpp"

class ControllableSystem : public System
{
    public:
        ControllableSystem(std::set<Entity>& _entities)
        {
            _entitiesList = _entities;
        }

        void Start();
        void Update(Mediator &mediator);

    private:
};
