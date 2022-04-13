/*
** EPITECH PROJECT, 2021
** eval_expert.h
** File description:
** bistro
*/

#ifndef _EVAL_EXPERT_H_
#define _EVAL_EXPERT_H_

#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include "bistro.h"
#include "macro.h"

char *summands(char **str_ptr);
char *factors(char **str_ptr);
char *number(char **str_ptr);
char *eval_expr(char *str);
char *add_inf(char const *str1, char const *str2);
char *div_inf(char const *str1, char const *str2);
char *mod_inf(char const *str1, char const *str2);
char *mult_inf(char const *str1, char const *str2);
char *sub_inf(char const *str1, char const *str2);
char *add(char *nb1, char *nb2, char *result);
char *special_cases(char *nb1, char *nb2, char *result);
char *calc_div(char *nb1, char *nb2, char *result);
char *div_int(char *nb1, char *nb2, char *result);
char *head_div(char *nb1, char *nb2, char *result);

#endif
