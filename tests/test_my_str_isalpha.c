/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** test my str isalpha
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, only_alpha_chars)
{
    cr_assert(my_str_isalpha("OuiBonjour") == 1);
}

Test(my_str_isalpha, not_only_alpha_chars)
{
    cr_assert(my_str_isalpha("Oui Bonjour") == 0);
}
