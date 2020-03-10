/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** test my_revstr
*/

#include <criterion/criterion.h>

char *my_strcpy(char *, char const *);
char *my_revstr(char *);

Test(my_revstr, reverse_string)
{
    char dest[10];

    my_strcpy(dest, "HelloWorld");
    my_revstr(dest);
    cr_assert_str_eq(dest, "dlroWolleH");
}
