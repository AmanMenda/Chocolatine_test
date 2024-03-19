/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Physics
*/

#pragma once

#include "../Maths/Vector2D.hpp"

struct Physics
{
    Vector2D velocity;
    Vector2D acceleration;
    Vector2D gravityScale;
    double   linearDrag = 2;
};