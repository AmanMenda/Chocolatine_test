/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** put_numbers
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

int main(void)
{
    return (0);
}
