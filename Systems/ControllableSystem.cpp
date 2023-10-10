/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** ControllableSystem
*/

#include "ControllableSystem.hpp"

void ControllableSystem::Start()
{
    std::cout << "STARTING CONTROLLABLE SYSTEM...\n";
}

void ControllableSystem::Update(Mediator &mediator)
{
    for (auto& entity : mediator._entityManagerPointer->_entities)
    {
        Physics&      physics   = mediator.GetComponent<Physics>(entity);
        Transform&    transform = mediator.GetComponent<Transform>(entity);
        Controllable& player    = mediator.GetComponent<Controllable>(entity);

        if (sf::Keyboard::isKeyPressed(player.up))
        {
            std::cout << "Up\n";
            transform.position.y -= (transform.position.y > 0) ? physics.linearDrag : 0.0f;
        }
        if (sf::Keyboard::isKeyPressed(player.down))
        {
            std::cout << "down\n";
            transform.position.y += (transform.position.y < 725) ? physics.linearDrag : 0.0f;
        }
        if (sf::Keyboard::isKeyPressed(player.left))
        {
            std::cout << "Left\n";
            transform.position.x -= (transform.position.x > 0) ? physics.linearDrag : 0.0f;
        }
        if (sf::Keyboard::isKeyPressed(player.right))
        {
            std::cout << "Right\n";
            transform.position.x += (transform.position.x < 1290) ? physics.linearDrag : 0.0f;
        }
    }
}