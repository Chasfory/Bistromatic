/*
** EPITECH PROJECT, 2021
** tests_unitaire.c
** File description:
** bistro
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdlib.h>
#include "eval.h"
#include <stdio.h>

Test(eval_expr, one_by_one) {
    cr_assert_str_eq(eval_expr("1-3"), "-2");
}

Test(eval_expr, one_by_height) {
    cr_assert_str_eq(eval_expr("1+8"), "9");
}

Test(eval_expr, two_less_one) {
    cr_assert_str_eq(eval_expr("2-4"), "-2");
}

Test(eval_expr, ten_multiply_one) {
    cr_assert_str_eq(eval_expr("2*1"), "2");
}

Test(eval_expr, ten_divide_ten) {
    cr_assert_str_eq(eval_expr("3/3"), "1");
}

Test(eval_expr, hundred_modulo_height) {
    cr_assert_str_eq(eval_expr("10%2"), "0");
}

Test(eval_expr, factor_operation) {
    cr_assert_str_eq(eval_expr("2*6/2%2"), "0");
}

Test(eval_expr, sums_operation) {
    cr_assert_str_eq(eval_expr("2+2-3+1"), "2");
}

Test(eval_expr, factors_and_sums) {
    cr_assert_str_eq(eval_expr("2*2+3-5/5"), "6");
}

Test(eval_expr, parenthesis) {
    cr_assert_str_eq(eval_expr("((8))"), "8");
}

Test(eval_expr, parenthesis_and_operation) {
    cr_assert_str_eq(eval_expr("2+(3*3-(2+2)-(5*5)+2"), "-16");
}
