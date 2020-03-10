/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** test my_strupcase
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);
char *my_strcpy(char *dest, char const *src);

Test(my_strupcase, test_my_strupcase)
{
    char dest[10];

    my_strcpy(dest, "CeCi est 1 test");
    my_strupcase(dest);
    cr_assert_str_eq(dest, "CECI EST 1 TEST");
}
