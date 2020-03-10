/*
** EPITECH PROJECT, 2019
** my_str_islower.c
** File description:
** test my str islower
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, only_lower_chars)
{
    cr_assert(my_str_islower("azertyuiopqsdfghjklmwxcvbn") == 1);
}

Test(my_str_islower, not_only_lower_chars)
{
    cr_assert(my_str_islower("azertyuio345-fgigvj V") == 0);
}
