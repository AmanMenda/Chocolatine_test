/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** ComponentArrays
*/

#pragma once
#include <cstring>
#include "utilities.hpp"
#include "IComponents.hpp"
#include "ComponentArrays.hpp"
#include "Exceptions.hpp"

class ComponentManager
{
public:
	template<typename Component>
	void RegisterComponent()
	{
		std::cout << "Component <" << __PRETTY_FUNCTION__ << "> registered\n";
		_componentTypes[std::type_index(typeid(Component))] = _nextComponentType;
		_componentArrays[std::type_index(typeid(Component))] = std::make_shared<ComponentArray<Component>>();
		_nextComponentType++;
	}

	template<typename Component>
	ComponentType GetComponentType()
	{
		if (_componentTypes.find(std::type_index(typeid(Component))) == _componentTypes.end())
		{
			throw Exception::InexistingComponent("GetComponentTypeError: Component not registered.\n");
		}
	
		// Return this component's type - used for creating signatures
		return _componentTypes[std::type_index(typeid(Component))];
	}

	template<typename ComponentType>
	void AddComponent(Entity entity, ComponentType component)
	{
		GetComponentArray<ComponentType>()->InsertData(entity, component);
	}

	template<typename ComponentType>
	void RemoveComponent(Entity entity)
	{
		GetComponentArray<ComponentType>()->RemoveData(entity);
	}

	template<typename ComponentType>
	ComponentType& GetComponent(Entity entity)
	{
		return GetComponentArray<ComponentType>()->GetData(entity);
	}

	void EntityDestroyed(Entity entity)
	{
		for (auto &[index, componentArray] : _componentArrays)
		{
			componentArray->EntityDestroyed(entity);
		}
	}

private:
	std::unordered_map<std::type_index, ComponentType> _componentTypes;
	std::unordered_map<std::type_index, std::shared_ptr<IComponentArray>> _componentArrays;
	ComponentType _nextComponentType;

	// Convenience function to get the statically casted pointer to the ComponentArray of type T.
	template<typename T>
	std::shared_ptr<ComponentArray<T>> GetComponentArray()
	{
		if (_componentTypes.find(std::type_index(typeid(T))) == _componentTypes.end())
		{
			std::cerr << "Component Type not found\n";
		}
		return std::static_pointer_cast<ComponentArray<T>>(_componentArrays.at(std::type_index(typeid(T))));
	}
};