/*
** EPITECH PROJECT, 2023
** R-type
** File description:
** Entities
*/

#include <cstddef>

class Entities
{
    public:

        // explicit construction from size_t
        explicit Entities(std::size_t id);

        // implicit conversion to size_t
        operator std::size_t() const {
            return _entity;
        }

    private:
        std::size_t _entity;
};