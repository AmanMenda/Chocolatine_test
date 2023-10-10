/*
** EPITECH PROJECT, 2023
** R-type
** File description:
** Entities
*/

#include "Entity.hpp"
#include "utilities.hpp"

class EntityManager
{
    public:
        EntityManager()
        {
            for (std::size_t id = 0; id < MAX_ENTITIES; id++)
                _availableID.push(id);
        }

        Entity CreateEntity()
        {
            // Take the smallest available ID and remove it from the queue
            Entity entity(_availableID.front());
            _availableID.pop();

            return entity;
        }

        void DestroyEntity(Entity entity)
        {
            // Reset the entity signature and put the destroyed ID at the back of the queue
            _signatures[entity].reset();
            _availableID.push(entity);
            _entities.erase(entity);
        }

        void SetSignature(Entity entity, Signature signature)
        {
            _signatures[entity] = signature;
        }

        Signature GetSignature(Entity entity)
        {
            return _signatures[entity];
        }

        std::set<Entity> _entities;
    private:
        std::queue<std::size_t> _availableID;

        // Array of signatures where the index corresponds to the entity ID
        std::array<Signature, MAX_ENTITIES> _signatures;
};
