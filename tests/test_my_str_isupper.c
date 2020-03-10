/*
** EPITECH PROJECT, 2019
** my_str_isupper.c
** File description:
** test my str isupper
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, only_upper_chars)
{
    cr_assert(my_str_isupper("AZERTYUIOPMLKJHGFDSQWXCVBN") == 1);
}

Test(my_str_isupper, not_only_upper_chars)
{
    cr_assert(my_str_isupper("AZERTYUIOPMLKJHGFDSQWXCVBN?N") == 0);
}
