/*
** EPITECH PROJECT, 2021
** test_mult_inf.c
** File description:
** tests mod inf
*/

#include <criterion/criterion.h>

char *mult_inf(char const *str1, char const *str2);

Test(mult_inf, big_by_big)
{
    cr_assert_str_eq(mult_inf("2389479384298347", "1203238032876432"), "2875112473961930940872472857904");
}

Test(mult_inf, minus_twentyfive_by_five)
{
    cr_assert_str_eq(mult_inf("-25", "5"), "-125");
}

Test(mult_inf, twentyfive_by_five)
{
    cr_assert_str_eq(mult_inf("25", "5"), "125");
}

Test(mult_inf, eight_by_six)
{
    cr_assert_str_eq(mult_inf("8", "6"), "48");
}

Test(mult_inf, something_by_zero)
{
    cr_assert_str_eq(mult_inf("0", "1"), "0");
}

Test(mult_inf, zero_by_zero)
{
    cr_assert_str_eq(mult_inf("0", "0"), "0");
}
