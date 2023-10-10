/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Mediator
*/

#pragma once

#include "utilities.hpp"
#include "ComponentManager.hpp"
#include "SystemManager.hpp"
#include "EntityManager.hpp"

class Mediator
{
public:
	void InitManagers()
	{
		_componentManagerPointer = std::make_unique<ComponentManager>();
		_entityManagerPointer = std::make_unique<EntityManager>();
		_systemManagerPointer = std::make_unique<SystemManager>(_entityManagerPointer->_entities);
	}

	// Entity methods
	Entity CreateEntity()
	{
		return _entityManagerPointer->CreateEntity();
	}

	void DestroyEntity(Entity entity)
	{
		_entityManagerPointer->DestroyEntity(entity);
		_componentManagerPointer->EntityDestroyed(entity);
		_systemManagerPointer->EntityDestroyed(entity);
	}

	// Component methods
	template<typename T>
	void RegisterComponent()
	{
		_componentManagerPointer->RegisterComponent<T>();
	}

	template<typename T>
	void AddComponent(Entity entity, T component)
	{
		_componentManagerPointer->AddComponent<T>(entity, component);

		Signature signature = _entityManagerPointer->GetSignature(entity);
		signature.set(_componentManagerPointer->GetComponentType<T>(), true);
		_entityManagerPointer->SetSignature(entity, signature);

		_systemManagerPointer->EntitySignatureChanged(entity, signature);
	}

	template<typename T>
	void RemoveComponent(Entity entity)
	{
		_componentManagerPointer->RemoveComponent<T>(entity);

		auto signature = _entityManagerPointer->GetSignature(entity);
		signature.set(_componentManagerPointer->GetComponentType<T>(), false);
		_entityManagerPointer->SetSignature(entity, signature);

		_systemManagerPointer->EntitySignatureChanged(entity, signature);
	}

	template<typename T>
	T& GetComponent(Entity entity)
	{
		return _componentManagerPointer->GetComponent<T>(entity);
	}

	template<typename T>
	ComponentType GetComponentType()
	{
		return _componentManagerPointer->GetComponentType<T>();
	}

	// System methods
	template<typename T>
	std::shared_ptr<T> RegisterSystem()
	{
		return _systemManagerPointer->RegisterSystem<T>();
	}

	template<typename T>
	void SetSystemSignature(Signature signature)
	{
		_systemManagerPointer->SetSignature<T>(signature);
	}

	public:
        std::unique_ptr<EntityManager> _entityManagerPointer;
    private:
        std::unique_ptr<ComponentManager> _componentManagerPointer;
        std::unique_ptr<SystemManager> _systemManagerPointer;
};
