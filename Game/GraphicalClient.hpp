/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda
** File description:
** GraphicalClient
*/

#ifndef GRAPHICALCLIENT_HPP_
    #define GRAPHICALCLIENT_HPP_

    #include <SFML/Audio.hpp>
    #include <SFML/System.hpp>
    #include <SFML/Graphics.hpp>

    #include "../Core/System.hpp"
    #include "../Core/Mediator.hpp"
    #include "../Core/utilities.hpp"

    #include "../Components/Physics.hpp"
    #include "../Components/Drawable.hpp"
    #include "../Components/Transform.hpp"
    #include "../Components/Collidable.hpp"
    #include "../Components/Controllable.hpp"
    #include "../Registry.hpp"

class GraphicalClient {
    public:
        GraphicalClient();
        ~GraphicalClient();

        void addPlayerComponents(const Entity& player, Mediator& mediator);

        void callSystemsStart(RegisteredSystems& registry, sf::RenderWindow& window);
        void callSystemsUpdate(RegisteredSystems& registry, Mediator& mediator);
        void handleEvents(sf::RenderWindow& window, sf::Event& event);
        
        int gameLoop(RegisteredSystems& registry, Mediator& mediator);

    private:
};

#endif
