/*
** EPITECH PROJECT, 2021
** test_div_inf.c
** File description:
** tests div inf
*/

#include <criterion/criterion.h>

char *div_inf(char const *str1, char const *str2);

Test(div_inf, rand_by_zero)
{
    cr_assert_str_eq(div_inf("100", "0"), "NULL");
}

Test(div_inf, zero_by_rand)
{
    cr_assert_str_eq(div_inf("0", "1000"), "0");
}

Test(div_inf, str1_inferior_str2)
{
    cr_assert_str_eq(div_inf("100", "101"), "0");
}

Test(div_inf, twentyfive_by_five)
{
    cr_assert_str_eq(div_inf("25", "5"), "5");
}

Test(div_inf, rand_by_one)
{
    cr_assert_str_eq(div_inf("25", "1"), "25");
}

Test(div_inf, rand_by_same)
{
    cr_assert_str_eq(div_inf("25", "25"), "1");
}
