/*
** EPITECH PROJECT, 2023
** B-CPP-500-COT-5-1-rtype-aman.menda [WSL: Ubuntu-22.04]
** File description:
** fact
*/

#include <stdio.h>
#include <stdlib.h>
#include <typeindex>
#include <typeinfo>
#include <iostream>

int factorial(int nb)
{
    if (nb == 0)
        return 1;

    return nb * factorial(nb - 1);
}

int mpowit(int n, int p)
{
    for (int i = 1; i < p; i++)
    {
        n *= n;
    }
    return n;
}

int mpowrec(int n, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return n;
    return n * mpowrec(n, p - 1);
}

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


int main(void)
{
    int nb = 3;

    // printf("%d\n", factorial(nb));
    // printf("%d\n", mpowrec(nb, 2));

    std::cout << std::type_index(typeid(int));
    return EXIT_SUCCESS;
}