/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda
** File description:
** GraphicalClient
*/

#include "GraphicalClient.hpp"

GraphicalClient::GraphicalClient()
{

}

GraphicalClient::~GraphicalClient()
{

}

void GraphicalClient::addPlayerComponents(const Entity& player, Mediator& mediator)
{
    mediator.AddComponent(player, Drawable{std::string("Assets/ShipSheet/ship (3).gif"), sf::Sprite(), sf::Texture()});
    mediator.AddComponent(player, Transform{.position = {200, 200}, .scale = {2, 2}, .rotationAngle = 0});
    mediator.AddComponent(player, Controllable{});
    mediator.AddComponent(player, Physics{.velocity = Vector2D(1,1),
                                        .acceleration = Vector2D(1, 1),
                                        .gravityScale = Vector2D(1, 1),
                                        .linearDrag = 2});
}

void GraphicalClient::callSystemsStart(RegisteredSystems& registry, sf::RenderWindow& window)
{
    registry.renderSystem->Start(window);
    registry.controllableSystem->Start();
}

void GraphicalClient::callSystemsUpdate(RegisteredSystems& registry, Mediator &mediator)
{
    registry.renderSystem->Update(mediator);
    registry.controllableSystem->Update(mediator);
}

void GraphicalClient::handleEvents(sf::RenderWindow& window, sf::Event& evt)
{
    while (window.pollEvent(evt))
    {
        if (evt.type == sf::Event::Closed)
            window.close();
    }
}

int GraphicalClient::gameLoop(RegisteredSystems& registry, Mediator& mediator)
{
    sf::RenderWindow window(sf::VideoMode(1360, 760), "R-Type Window");
    sf::Event event;
    sf::Clock clock;
    sf::Time time;

    callSystemsStart(registry, window);
    while (window.isOpen())
    {
        time = clock.getElapsedTime();
        handleEvents(window, event);
        callSystemsUpdate(registry, mediator);
        window.display();
    }
    return EXIT_SUCCESS;
}
