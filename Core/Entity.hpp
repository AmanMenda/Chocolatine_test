/*
** EPITECH PROJECT, 2023
** R-type
** File description:
** Entity
*/

#pragma once
#include <cstddef>

class Entity
{
    public:

        explicit Entity(std::size_t id)
        {
            _entity = id;
        }

        Entity(const Entity& other)
        {
            _entity = other._entity;
        }

        Entity(Entity& other)
        {
            _entity = other._entity;
        }

        Entity(Entity&& other)
        {
            _entity = std::move(other._entity);
        }

        Entity(const Entity&& other)
        {
            _entity = std::move(other._entity);
        }

        Entity operator=(const Entity&& other)
        {
            _entity = std::move(other._entity);
            
            return *this;
        }

        Entity operator=(Entity& other)
        {
            _entity = other._entity;

            return *this;
        }
    
        Entity operator=(const Entity& other)
        {
            _entity = other._entity;
            return *this;
        }

        // implicit conversion to size_t
        operator size_t() const {
            return _entity;
        }

        bool operator==(const Entity& other) const
        {
            if (_entity == other._entity)
                return (true);
            return (false);
        }

        bool operator==(const size_t& other) const
        {
            if (_entity == other)
                return (true);
            return (false);
        }
    private:
        size_t _entity;
};
