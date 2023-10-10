/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda
** File description:
** Core
*/

#ifndef CORE_HPP_
    #define CORE_HPP_

    #include "../Core/Mediator.hpp"
    #include "../Core/utilities.hpp"

    #include "../Systems/RenderSystem.hpp"
    #include "../Systems/ControllableSystem.hpp"

    #include "../Maths/Vector2D.hpp"

    #include "../Registry.hpp"
    #include "GraphicalClient.hpp"

class Core {
    public:
        Core();
        ~Core();

        RegisteredSystems csRegistration(void);
        
        void mainManager();

    private:
        std::shared_ptr<GraphicalClient> _graphical;
};

#endif
