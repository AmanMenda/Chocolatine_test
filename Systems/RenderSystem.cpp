/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** RenderSystem
*/

#include "RenderSystem.hpp"

/**
 * @brief: Setup the window variable and define the default parameters
 * @param: sf::RenderWindow& window
 * @return: void
*/
void RenderSystem::Start(sf::RenderWindow& window)
{
    _window = &window;

    _window->setFramerateLimit(framePerSeconds);
    
    std::cout << "STARTING RENDER SYSTEM...\n";
}

/**
 * @brief: Loop through the entities list and get their Drawable and Transform
 * components. It then create a texture and a sprite and draw them on the window
 * @bug: not using the deltaTime yet
 * 
*/
void RenderSystem::Update(Mediator &mediator)
{
    sf::Texture texture;
    sf::Sprite sprite;

    _window->clear();
    // Parcourir la liste des entités et récupérer leur composant Drawable et Transform
    for (const Entity& entity: mediator._entityManagerPointer->_entities)
    {
        // std::cout << "Entity: " << entity << '\n'; 
        Drawable& drawable =  mediator.GetComponent<Drawable>(entity);
        Transform& transform = mediator.GetComponent<Transform>(entity);

        if (!texture.loadFromFile(drawable.spritePath))
            std::cerr << "Texture Error: Cannot load the texture\n.";
        
        // std::cout << "drawed at: " << std::addressof(transform) << std::endl;
        // std::cout << "transform pos: {x = " << transform.position.x << ", y = " << transform.position.y << "}\n";
        sprite.setTexture(texture);
        sprite.setPosition(transform.position.x, transform.position.y);
        sprite.setRotation(transform.rotationAngle);
        sprite.setScale(transform.scale.x, transform.scale.y);

        drawable.sprite = sprite;
        drawable.texture = texture;

        _window->draw(sprite);
    }
}