/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Vector2D
*/

#include "Vector2D.hpp"

Vector2D::Vector2D() :  x(0), y(0) {}

Vector2D::Vector2D(double xValue, double yValue) : x(xValue), y(yValue) {}

Vector2D::Vector2D(Vector2D& other)
{
    x = other.x;
    y = other.y;
}

Vector2D::Vector2D(Vector2D&& other)
{
    x = other.x;
    y = other.y;

    other.x = 0;
    other.y = 0;
}

Vector2D::Vector2D(const Vector2D& other)
{
    x = other.x;
    y = other.y;
}

Vector2D& Vector2D::operator=(const Vector2D& other)
{
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Vector2D& Vector2D::operator=(Vector2D&& other)
{
    if (this != &other) {
        x = other.x;
        y = other.y;

        other.x = 0;
        other.y = 0;
    }
    return *this;
}

Vector2D Vector2D::operator-(const Vector2D& other)
{
    Vector2D vector;

    vector.x = x - other.x;
    vector.y = y - other.y;

    return vector;
}

Vector2D Vector2D::operator+(const Vector2D& other)
{
    Vector2D vector;

    vector.x = x + other.x;
    vector.y = y + other.y;

    return vector;
}

Vector2D Vector2D::operator/(const Vector2D& other)
{
    Vector2D vector;

    vector.x = x / other.x;
    vector.y = y / other.y;

    return vector;
}

Vector2D Vector2D::operator*(const Vector2D& other)
{
    Vector2D vector;

    vector.x = x * other.x;
    vector.y = y * other.y;

    return vector;
}

Vector2D& Vector2D::operator+=(const Vector2D& other)
{
    x += other.x;
    y += other.y;

    return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& other)
{
    x -= other.x;
    y -= other.y;

    return *this;
}

Vector2D& Vector2D::operator*=(const Vector2D& other)
{
    x *= other.x;
    y *= other.y;

    return *this;
}

Vector2D& Vector2D::operator/=(const Vector2D& other)
{
    x /= other.x;
    y /= other.y;

    return *this;
}

//Operations between a vector and a double
Vector2D Vector2D::operator*(const double value)
{
    Vector2D vector;

    vector.x = x * value;
    vector.y = y * value;
    
    return vector;
}

Vector2D Vector2D::operator/(const double value)
{
    Vector2D vector;

    vector.x = x / value;
    vector.y = y / value;
    
    return vector;
}

Vector2D& Vector2D::operator*=(const double value)
{
    x = x * value;
    y = y * value;
    
    return *this;
}

Vector2D& Vector2D::operator/=(const double value)
{
    x = x / value;
    y = y / value;
    
    return *this;
}