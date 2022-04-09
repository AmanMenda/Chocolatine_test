/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** display character
*/

#include "../tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_ch(void)
{
    cr_redirect_stdout();
}

Test(my_putchar, display_character, .init = redirect_ch)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}
