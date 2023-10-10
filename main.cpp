/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** main
*/

#include "Components/Collidable.hpp"
#include "Components/Controllable.hpp"
#include "Components/Drawable.hpp"
#include "Components/Physics.hpp"
#include "Components/Transform.hpp"

#include "Core/utilities.hpp"
#include "Core/Mediator.hpp"

#include "Systems/RenderSystem.hpp"
#include "Systems/ControllableSystem.hpp"

#include "Maths/Vector2D.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>

#include <SFML/System/Clock.hpp>

#include "Registry.hpp"

Mediator mediator;

// RegisteredSystems csRegistration(void)
// {
//     RegisteredSystems registry;

//     mediator.InitManagers();
//     mediator.RegisterComponent<Drawable>();
//     mediator.RegisterComponent<Transform>();
//     mediator.RegisterComponent<Physics>();
//     mediator.RegisterComponent<Controllable>();

//     registry.renderSystem = mediator.RegisterSystem<RenderSystem>();
//     {
//         Signature signature;
// 		signature.set(mediator.GetComponentType<Transform>());
// 		signature.set(mediator.GetComponentType<Drawable>());
// 		mediator.SetSystemSignature<RenderSystem>(signature);
//     }
//     registry.controllableSystem = mediator.RegisterSystem<ControllableSystem>();
//     {
//         Signature signature;
// 		signature.set(mediator.GetComponentType<Transform>());
// 		signature.set(mediator.GetComponentType<Physics>());
// 		signature.set(mediator.GetComponentType<Controllable>());
// 		mediator.SetSystemSignature<ControllableSystem>(signature);
//     }
//     return registry;
// }

// void callSystemsStart(RegisteredSystems& registry, sf::RenderWindow& window)
// {
//     registry.renderSystem->Start(window);
//     registry.controllableSystem->Start();
// }

// void callSystemsUpdate(RegisteredSystems& registry)
// {
//     registry.renderSystem->Update();
//     registry.controllableSystem->Update();
// }

// void handleEvents(sf::RenderWindow& window, sf::Event& evt)
// {
//     while (window.pollEvent(evt))
//     {
//         if (evt.type == sf::Event::Closed)
//             window.close();
//     }
// }

// int gameLoop(RegisteredSystems& registry)
// {
//     sf::RenderWindow window(sf::VideoMode(800, 600), "R-Type Window");
//     sf::Time time;
//     sf::Clock clock;
//     sf::Event evt;

//     callSystemsStart(registry, window);
//     while (window.isOpen())
//     {
//         time = clock.getElapsedTime();
//         handleEvents(window, evt);
//         callSystemsUpdate(registry);
//         window.display();
//     }
//     return EXIT_SUCCESS;
// }

int main(void)
{   
    /*RegisteredSystems registry = csRegistration();
    Entity square = mediator.CreateEntity();
    Entity square2 = mediator.CreateEntity();

    mediator.AddComponent(square, Drawable{std::string("Apex-legend.png"), sf::Sprite(), sf::Texture()});
    mediator.AddComponent(square, Transform{.position = {200, 200}, .scale = {0.25, 0.25}, .rotationAngle = 0});
    mediator.AddComponent(square, Controllable{});
    mediator.AddComponent(square, Physics{.velocity = Vector2D(1,1),
                                        .acceleration = Vector2D(1, 1),
                                        .gravityScale = Vector2D(1, 1),
                                        .linearDrag = 2});

    mediator.AddComponent(square2, Drawable{std::string("Apex-legend.png"), sf::Sprite(), sf::Texture()});
    mediator.AddComponent(square2, Transform{.position = {500, 300}, .scale = {0.25, 0.25}, .rotationAngle = 0});

    mediator._entityManagerPointer->_entities.insert(square);
    mediator._entityManagerPointer->_entities.insert(square2);

    gameLoop(registry);*/
    return EXIT_SUCCESS;
}