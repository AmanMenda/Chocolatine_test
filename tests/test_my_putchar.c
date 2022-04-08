/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** display character
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/sokoban.h"

void redirect_ch(void)
{
    cr_redirect_stdout();
}

Test(my_putchar, display_character, .init = redirect_ch)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}
