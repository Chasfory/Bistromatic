/*
** EPITECH PROJECT, 2021
** test_sub_inf.c
** File description:
** tests mod inf
*/

#include <criterion/criterion.h>

char *sub_inf(char const *str1, char const *str2);

Test(sub_inf, big_by_big)
{
    cr_assert_str_eq(sub_inf("120938120938", "4203482394"), "116734638544");
}

Test(sub_inf, twentyfive_by_fifty)
{
    cr_assert_str_eq(sub_inf("25", "50"), "-25");
}

Test(sub_inf, minus_by_eight)
{
    cr_assert_str_eq(sub_inf("-12", "8"), "-4");
}

Test(sub_inf, minus_by_minus)
{
    cr_assert_str_eq(sub_inf("-12", "-20"), "8");
}

Test(sub_inf, eight_by_minus)
{
    cr_assert_str_eq(sub_inf("8", "-20"), "28");
}

Test(sub_inf, twelve_by_six)
{
    cr_assert_str_eq(sub_inf("12", "6"), "6");
}

Test(sub_inf, zero_by_one)
{
    cr_assert_str_eq(sub_inf("0", "1"), "-1");
}

Test(sub_inf, zero_by_zero)
{
    cr_assert_str_eq(sub_inf("0", "0"), "0");
}
