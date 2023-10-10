/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** Vector3D
*/

#pragma once

class Vector2D
{
public:
    Vector2D();
    Vector2D(double xValue, double yValue);

    //copy constructor
    Vector2D(Vector2D& other);
    
    //move constructor
    Vector2D(Vector2D&& other);
    Vector2D(const Vector2D& other);

    //copy operator
    Vector2D& operator=(const Vector2D& other);

    //move operator
    Vector2D& operator=(Vector2D&& other);

    //Operations between two vectors
    Vector2D operator-(const Vector2D& other);
    Vector2D operator+(const Vector2D& other);
    Vector2D operator/(const Vector2D& other);
    Vector2D operator*(const Vector2D& other);
    Vector2D& operator+=(const Vector2D& other);
    Vector2D& operator-=(const Vector2D& other);
    Vector2D& operator*=(const Vector2D& other);
    Vector2D& operator/=(const Vector2D& other);

    //Operations between a vector and a double
    Vector2D operator*(const double value);
    Vector2D operator/(const double value);
    Vector2D& operator*=(const double value);
    Vector2D& operator/=(const double value);

    double x;
    double y;
};