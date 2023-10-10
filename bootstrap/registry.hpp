/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** registry
*/

#ifndef REGISTER_HPP_
#define REGISTER_HPP_

#include <iostream>
#include <typeinfo>
#include <typeindex>
#include <unordered_map>
#include <string>
#include <memory>
#include <functional>
#include <any>

#include "SparseArray.hpp"
#include "Exceptions.hpp"
#include "Entities.hpp"

class Registry
{
    public:
        template <class Component>
        sparse_array<Component>& register_component()
        {
            sparse_array<Component> newComponentArray;

            _components_arrays[std::type_index(typeid(Component))] = std::make_any<sparse_array<Component>>(newComponentArray);

            _eraserFunctions[std::type_index(typeid(Component))] = [&](Registry& registry, Entities const& entity) {
                // loop through registry's sparse_arrays
                for (auto& component_array: registry._components_arrays)
                {
                    // access the component specified by "entity" in each sparse_array and remove it
                    (std::any_cast<sparse_array<Component>>(component_array.second)).erase(entity);
                }
            };
            return std::any_cast<sparse_array<Component>&>(_components_arrays[std::type_index(typeid(Component))]);
        }

        template <class Component>
        sparse_array<Component>& get_components()
        {
            if (_components_arrays.find(std::type_index(typeid(Component))) == _components_arrays.end())
            {
                throw Error::RegistryErrorComponentNotFound("Registry Error: The component we are looking for does not exists");
            }
            return std::any_cast<sparse_array<Component>&>(_components_arrays[std::type_index(typeid(Component))]);
        }

        template <class Component>
        sparse_array<Component> const& get_components() const
        {
            if (_components_arrays.find(std::type_index(typeid(Component))) == _components_arrays.end())
            {
                throw Error::RegistryErrorComponentNotFound("Registry Error: The component we are looking for does not exists");
            }
            return std::any_cast<sparse_array<Component> const&>(_components_arrays.at(std::type_index(typeid(Component))));
        }

        // To be implemented: @stella
        class EntityManager
        {
            public:
            private:
        };

    private:
        std::unordered_map<std::type_index, std::any> _components_arrays;
        std::unordered_map<std::type_index, std::function<void(Registry& registry, Entities const& entity)>> _eraserFunctions;
};

#endif