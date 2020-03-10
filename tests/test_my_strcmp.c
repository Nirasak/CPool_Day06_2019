/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** str cmp
*/

#include <criterion/criterion.h>

char *my_strcpy(char *, char const *);
int my_strcmp(char const *, char const *);

Test(my_strcmp, compare_five_chars)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "oui");
    cr_assert(my_strcmp(s1, s2) == 0);
}

Test(my_strcmp, compare_two_diff_strings)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "ouio");
    my_strcpy(s2, "oui");
    cr_assert(my_strcmp(s1, s2) == 1);
}

Test(my_strcmp, compare_two_other_strings)
{
    char s1[5] = {0};
    char s2[5] = {0};

    my_strcpy(s1, "oui");
    my_strcpy(s2, "ouio");
    cr_assert(my_strcmp(s1, s2) == -1);
}
