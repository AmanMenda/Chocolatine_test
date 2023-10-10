/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** SystemManager
*/

#pragma once

#include "utilities.hpp"
#include "System.hpp"
#include "Exceptions.hpp"

using Signature = std::bitset<MAX_COMPONENTS>;

class SystemManager
{
public:
	SystemManager(std::set<Entity>& entities)
	{
		_entity = entities;
	}

	template<typename T>
	std::shared_ptr<T> RegisterSystem()
	{
		if (_systems.find(std::type_index(typeid(T))) == _systems.end())
		{
			Exception::InexistingComponent("RegisterSystemError: Cannot find the component.\n");
		}

		// Create a pointer to the system and return it so it can be used externally
		auto system = std::make_shared<T>(_entity);
		_systems[std::type_index(typeid(T))] = system;
		return system;
	}

	template<typename T>
	void SetSignature(Signature signature)
	{
		if (_systems.find(std::type_index(typeid(T))) == _systems.end())
		{
			Exception::InexistingComponent("SetSignatureError: Cannot find the component.\n");
		}

		_signatures.insert({std::type_index(typeid(T)), signature});
	}

	void EntityDestroyed(Entity entity)
	{
		// Erase a destroyed entity from all system lists
		// mEntities is a set so no check needed
		for (auto const& [key, system]: _systems)
			system->_entitiesList.erase(entity);
	}

	void EntitySignatureChanged(Entity entity, Signature entitySignature)
	{
		// Notify each system that an entity's signature changed
		for (auto const& [type, system] : _systems)
		{
			auto const& systemSignature = _signatures[type];

			// Entity signature matches system signature - insert into set
			if ((entitySignature & systemSignature) == systemSignature)
			{
				system->_entitiesList.insert(entity);
			}
			// Entity signature does not match system signature - erase from set
			else
			{
				system->_entitiesList.erase(entity);
			}
		}
	}

private:
	// Map from system type string pointer to a signature
	std::unordered_map<std::type_index, Signature> _signatures;

	// Map from system type string pointer to a system pointer
	std::unordered_map<std::type_index, std::shared_ptr<System>> _systems;
	std::set<Entity> _entity;
};