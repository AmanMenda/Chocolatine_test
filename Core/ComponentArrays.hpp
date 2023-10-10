/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Components
*/

#pragma once

#include "IComponents.hpp"
#include <optional>

template<typename Component>
class ComponentArray : public IComponentArray
{
public:
	ComponentArray()
	{
		for (size_t i = 0; i < MAX_ENTITIES; i++)
		{
			_componentArray[i] = std::nullopt;
		}
	}

	void InsertData(Entity entity, Component component)
	{
		if (_componentArray[entity] != std::nullopt)
		{
			std::cerr << "New component added to an existing entity.\n";	
		}
		_componentArray[entity] = component;
	}

	void RemoveData(Entity entity)
	{
		_componentArray[entity] = std::nullopt;
		// Copy element at end into deleted element's place to maintain density
		// size_t indexOfRemovedEntity = _entityToIndex[entity];
		// size_t indexOfLastElement = _validEntries - 1;
		// _componentArray[indexOfRemovedEntity] = _componentArray[indexOfLastElement];

		// // Update map to point to moved spot
		// Entity entityOfLastElement = _indexToEntity[indexOfLastElement];
		// _entityToIndex[entityOfLastElement] = indexOfRemovedEntity;
		// _indexToEntity[indexOfRemovedEntity] = entityOfLastElement;

		// _entityToIndex.erase(entity);
		// _indexToEntity.erase(indexOfLastElement);

		// _validEntries--;
	}

	Component& GetData(Entity entity)
	{
		// if (_entityToIndex.find(entity) == _entityToIndex.end())
		// {
		// 	/*throw Exception::InexistingComponent("Cannot find the component to remove");*/
		// 	std::cerr << "Cannot get the entity needed\n";
		// }
		
		// Return a reference to the entity's component
		return *_componentArray[entity];
	}

	void EntityDestroyed(Entity entity) override
	{
		/*if (_entityToIndex.find(entity) != _entityToIndex.end())
		{*/
			RemoveData(entity);
		// }
	}

private:
	std::array<std::optional<Component>, MAX_ENTITIES> _componentArray;
	// std::unordered_map<Entity, size_t> _entityToIndex;
	// std::unordered_map<size_t, Entity> _indexToEntity;
	// Total size of valid entries in the array.
	size_t _validEntries;
};
