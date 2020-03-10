/*
** EPITECH PROJECT, 2019
** my_str_isprintable.c
** File description:
** test my str is printable
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);
char *my_strcpy(char *dest, char const *str);

Test(my_str_iprintable, only_printable_chars)
{
    cr_assert(my_str_isprintable("0123456789") == 1);
}

Test(my_str_isprintable, not_only_printable_chars)
{
    char dest[15] = {0};

    my_strcpy(dest, "c'est un test");
    dest[4] = 12;
    cr_assert(my_str_isprintable(dest) == 0);
}
