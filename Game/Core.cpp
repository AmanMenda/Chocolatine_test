/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda
** File description:
** Core
*/

#include "Core.hpp"

Mediator _mediator;

Core::Core()
{
}

Core::~Core()
{
}

RegisteredSystems Core::csRegistration(void)
{
    RegisteredSystems registry;

    _mediator.InitManagers();
    _mediator.RegisterComponent<Drawable>();
    _mediator.RegisterComponent<Transform>();
    _mediator.RegisterComponent<Physics>();
    _mediator.RegisterComponent<Controllable>();

    registry.renderSystem = _mediator.RegisterSystem<RenderSystem>();
    {
        Signature signature;
		signature.set(_mediator.GetComponentType<Transform>());
		signature.set(_mediator.GetComponentType<Drawable>());
		_mediator.SetSystemSignature<RenderSystem>(signature);
    }
    registry.controllableSystem = _mediator.RegisterSystem<ControllableSystem>();
    {
        Signature signature;
		signature.set(_mediator.GetComponentType<Transform>());
		signature.set(_mediator.GetComponentType<Physics>());
		signature.set(_mediator.GetComponentType<Controllable>());
		_mediator.SetSystemSignature<ControllableSystem>(signature);
    }
    return registry;
}

void Core::mainManager()
{
    RegisteredSystems registry = csRegistration();
    Entity player1 = _mediator.CreateEntity();

    _mediator._entityManagerPointer->_entities.insert(player1);

    for (const Entity& player: _mediator._entityManagerPointer->_entities)
        _graphical->addPlayerComponents(player, _mediator);

    _graphical = std::make_shared<GraphicalClient>();
    _graphical->gameLoop(registry, _mediator);
}
