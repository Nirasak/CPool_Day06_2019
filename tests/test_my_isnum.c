/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** test my str isnum
*/

#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isalpha, only_num_chars)
{
    cr_assert(my_str_isnum("0123456789") == 1);
}

Test(my_str_isalpha, not_only_num_chars)
{
    cr_assert(my_str_isnum("01234HAHA56789") == 0);
}
