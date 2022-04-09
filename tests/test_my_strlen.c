/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** strlen
*/

#include "../tests.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strlen, strlen_exist)
{
    my_strlen("");
}

Test(my_strlen, empty_string)
{
    int result;

    result = my_strlen("");
    cr_assert_eq(0, result);
}

Test(my_strlen, non_void_str)
{
    int result;

    result = my_strlen("test");
    cr_assert_eq(4, result);
}

Test(my_strlen, void_string, .exit_code = 0)
{
    char *string = NULL;

    my_strlen(string);
}
