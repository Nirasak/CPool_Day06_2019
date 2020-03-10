/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** test my strncmp
*/

#include <criterion/criterion.h>

char *my_strcpy(char *, char const *);
int my_strncmp(char const *, char const *, int);

Test(my_strncmp, compare_five_chars_n)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "oui");
    cr_assert(my_strncmp(s1, s2, 10) == 0);
}

Test(my_strcnmp, compare_two_diff_strings_n)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "ouio");
    my_strcpy(s2, "oui");
    cr_assert(my_strncmp(s1, s2, 10) == 1);
}

Test(my_strcnmp, compare_two_other_strings_n)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "ouio");
    cr_assert(my_strncmp(s1, s2, 10) == -1);
}

Test(my_strncmp, compare_strings_longer_than_n)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "oui");
    cr_assert(my_strncmp(s1, s2, 2) == 0);
}

Test(my_strncmp, n_equal_zero)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "oui");
    cr_assert(my_strncmp(s1, s2, 0) == 0);
}
