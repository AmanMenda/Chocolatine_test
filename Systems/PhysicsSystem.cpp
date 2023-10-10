/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** PhysicsSystem
*/

#include "PhysicsSystem.hpp"

void PhysicsSystem::Start()
{}

void PhysicsSystem::Update(Mediator &mediator, float deltaTime)
{
    for (auto& entity : _entitiesList)
	{
        Physics&     physics   = mediator.GetComponent<Physics>(entity);
		Transform&   transform = mediator.GetComponent<Transform>(entity);

		transform.position += (physics.velocity * deltaTime) + physics.acceleration;
		physics.velocity += (physics.gravityScale * deltaTime);
	}
}
