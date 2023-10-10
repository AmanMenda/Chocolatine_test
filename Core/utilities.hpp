/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** utilities
*/

#pragma once

#include <cstring>
#include <bitset>
#include <memory>
#include <array>
#include <queue>
#include <cstddef>
#include <iostream>
#include <unordered_map>
#include <typeinfo>
#include <typeindex>
#include <cmath>
#include <any>
#include <set>

#include "Entity.hpp"

using ComponentType = std::size_t;
// const ComponentType MAX_COMPONENTS = std::type_index(t32;
const int MAX_COMPONENTS = 32;
using Signature = std::bitset<MAX_COMPONENTS>;

const std::size_t MAX_ENTITIES = 40;