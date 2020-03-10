/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** test my strncpy
*/

#include <criterion/criterion.h>

int my_strncpy(char *, char const *, int);

Test(my_strncpy, copy_five_characteres_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_five_characteres_in_string)
{
    char dest[5] = {0};

    my_strncpy(dest, "Hello", 4);
    cr_assert_str_eq(dest, "Hell");
}
