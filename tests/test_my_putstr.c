/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** put string
*/

#include "../include/sokoban.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_string(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putstr, is_defined)
{
    my_putstr("");
}

Test(my_putstr, display_str, .init = redirect_all_string)
{
    my_putstr("Epitech");
    cr_assert_stdout_eq_str("Epitech");
}
