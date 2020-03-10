/*
** EPITECH PROJECT, 2019
** my_stracapitalize
** File description:
** test my strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);
char *my_strcapitalize(char *str);

Test(my_strcapitalize, test_my_strcapitalize)
{
    char str[48] = {0};

    my_strcpy(str, "ceCI est-un,test)parce qUE C'est COMME ca 43haha");
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Ceci Est-Un,Test)Parce Que C'Est Comme Ca 43haha");
}
