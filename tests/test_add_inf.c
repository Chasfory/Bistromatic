/*
** EPITECH PROJECT, 2021
** test_add_inf.c
** File description:
** tests add inf
*/

#include <criterion/criterion.h>

char *add_inf(char const *str1, char const *str2);

Test(add_inf, twentyfive_by_five)
{
    cr_assert_str_eq(add_inf("25", "5"), "30");
}

Test(add_inf, eight_by_six)
{
    cr_assert_str_eq(add_inf("8", "6"), "14");
}

Test(add_inf, zero_by_one)
{
    cr_assert_str_eq(add_inf("0", "1"), "1");
}

Test(add_inf, zero_by_zero)
{
    cr_assert_str_eq(add_inf("0", "0"), "0");
}
