/*
** EPITECH PROJECT, 2021
** test_mod_inf.c
** File description:
** tests mod inf
*/

#include <criterion/criterion.h>

char *mod_inf(char const *str1, char const *str2);

Test(mod_inf, big_by_big)
{
    cr_assert_str_eq(mod_inf("1111111111", "111111111111110"), "1111111111");
}

Test(mod_inf, twentyfive_by_five)
{
    cr_assert_str_eq(mod_inf("25", "5"), "0");
}

Test(mod_inf, eight_by_six)
{
    cr_assert_str_eq(mod_inf("8", "6"), "2");
}

Test(mod_inf, zero_by_one)
{
    cr_assert_str_eq(mod_inf("0", "1"), "0");
}

Test(mod_inf, zero_by_zero)
{
    cr_assert_str_eq(mod_inf("0", "0"), "NULL");
}
