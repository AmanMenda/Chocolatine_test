/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda
** File description:
** SparseArray
*/

#pragma once

#include <iostream>
#include <optional>
#include <string>
#include <vector>
#include <memory>

template <typename Component, class Allocator = std::allocator<Component>>
class sparse_array
{
    public:
        using value_type = std::optional<Component>;

        using reference_type = value_type &;

        using pointer_type = value_type *;

        using const_reference_type = value_type const &;

        using container_t = std::vector<value_type>;

        using size_type = typename container_t::size_type;

        using iterator = typename container_t::iterator;
        
        using const_iterator = typename container_t::const_iterator;

    public:
        // Default constructor
        constexpr sparse_array() : _data({}) {}
    
        // copy constructor
        constexpr sparse_array(const sparse_array& original) {
            if (original.size() > 0)
                _data = original._data;
        }

        // move constructor
        constexpr sparse_array(sparse_array&& original) noexcept
        {
            if (original.size() > 0)
            {
                _data = original._data;
                original._data.clear();
            }
        }

        constexpr ~sparse_array()
        {
            ~Component();
        }

        // copy assignment operator
        constexpr sparse_array& operator=(sparse_array const & other)
        {
            if (this != other)
                this->_data = other._data;
            return *this;
        }

        // move assignment operator
        sparse_array& operator=(sparse_array && other) noexcept
        {
            if (this != other)
            {
                this->_data = other._data;
                other._data.clear();
            }
            return *this;
        }

        reference_type operator[](size_t idx)
        {
            if (idx < _data.size())
                return _data[idx];
            throw std::range_error("Out of range");
            return _data[0];
        }

        const_reference_type operator[](size_t idx) const
        {
            if (idx < _data.size())
                return _data.at(idx);
            throw std::range_error("Out of range");
            return _data.at(0);
        }

        iterator begin() { return _data.begin(); }

        const_iterator begin() const { return _data.cbegin(); }

        const_iterator cbegin() const { return _data.cbegin(); }

        iterator end() { return _data.end(); }

        const_iterator end() const { return _data.cend(); }

        const_iterator cend() const { return _data.cend(); }

        size_type size() const { return _data.size(); }
    
        reference_type insert_at(size_type pos, Component const& component)
        {
            // maybe loop through the array and put nullopt inside every empty cases
            if (pos >= _data.size())
            {
                _data.resize(pos + 1);
            }
            _data[pos] = std::make_optional<Component>(component);
            return _data[pos];
        }

        reference_type insert_at(size_type pos, Component&& component)
        {
            if (pos >= _data.size())
                _data.resize(pos + 1);
            _data[pos] = std::make_optional<Component>(component);
            return _data[pos];
        }

        template <class... Params>
        reference_type emplace_at(size_type pos, Params&&... components)
        {
            pointer_type ptr;

            if (pos >= _data.size())
                _data.resize(pos + 1);
            ptr = _data.get_allocator().allocate(1);
            ptr = std::construct_at(ptr, std::make_optional<Component>(components...));
            if (ptr)
                _data[pos] = std::move(*ptr);
            _data.get_allocator().deallocate(ptr, 1);
            return _data[pos];
        }

        void erase(size_type pos)
        {
            if (pos >= _data.size())
                throw std::range_error("Position is out of range");
            _data[pos] = std::nullopt;
        }

        size_type get_index(value_type const& component) const
        {
            for (size_type i = 0; i < _data.size(); i++)
            {
                if (_data[i] != std::nullopt && (std::addressof(_data[i]) == std::addressof(component)))
                    return (i);
            }
            throw std::range_error("Index Error: The component was not found after iterating on every elts");
        }

    private:
        container_t _data;
};