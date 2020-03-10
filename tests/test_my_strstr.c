/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** test my strstr
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *str, char const *to_find);

Test(my_strstr, strstr_one)
{
    char str[30] = {0};
    char to_find[10] = {0};
    char *stock;

    my_strcpy(str, "ceci est une botte de foin");
    my_strcpy(to_find, "foin");
    stock = my_strstr(str, to_find);
    cr_assert_str_eq(stock, "foin");
}

Test(my_strstr, strstr_two)
{
    char str[30] = {0};
    char to_find[10] = {0};
    char *stock;

    my_strcpy(str, "ceci est une botte de foin");
    my_strcpy(to_find, "botte");
    stock = my_strstr(str, to_find);
    cr_assert_str_eq(stock, "botte de foin");
}

Test(my_strstr, strstr_three)
{
    char str[30] = {0};
    char to_find[10] = {0};
    char *stock;

    my_strcpy(str, "ceci est une botte de foin");
    my_strcpy(to_find, "nique");
    stock = my_strstr(str, to_find);
    cr_assert_null(stock);
}

Test(my_strstr, strstr_four)
{
    char str[30] = {0};
    char to_find[10] = {0};
    char *stock;

    my_strcpy(str, "HAHA");
    my_strcpy(to_find, "C FUN");
    stock = my_strstr(str, to_find);
    cr_assert_null(stock);
}

Test(my_strstr, strstr_five)
{
    char str[30] = {0};
    char to_find[10] = {0};
    char *stock;

    my_strcpy(str, "HAHA");
    my_strcpy(to_find, "");
    stock = my_strstr(str, to_find);
    cr_assert_str_eq(stock, "HAHA");
}
