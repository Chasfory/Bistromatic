/*
** EPITECH PROJECT, 2021
** mod_inf.c
** File description:
** infinte modulo of 2 strings
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "my.h"
#include "macro.h"
#include "bistro.h"

char *calc_mod(char *nb1, char *nb2, char *result)
{
    char *rest = "0";
    int j = 0;
    int k = 0;

    for (; (my_strlen(nb1) - 1 > my_strlen(nb2)) ||
        (my_strcmp(nb1, nb2) >= 0 && my_strlen(nb1) > my_strlen(nb2)); k++)
        nb2 = mult_inf(nb2, "10");
    for (int i = 0; k >= i; i++) {
        for (j = 0; (my_strlen(rest) < my_strlen(nb1)) || \
            (my_strlen(rest) == my_strlen(nb1) && \
            my_strcmp(nb1, rest) >= 0 && j <= 9); j++) {
            result[i] = ITOC(j);
            rest = mult_inf(nb2, result);
        }
        j = (my_strcmp(nb1, rest) >= 0 && j == 10) ? (j - 1) : (j - 2);
        result[i] = ITOC(j);
        rest = sub_inf(nb1, mult_inf(nb2, result));
        nb2[my_strlen(nb2) - 1] = '\0';
    }
    return rest;
}

char *mod_inf(char const *str1, char const *str2)
{
    int n = 1;
    int llen = longuest_str(str1, str2);
    char *result = malloc(sizeof(char) * llen);
    char *nb1 = rm_sign(my_strdup(str1));
    char *nb2 = rm_sign(my_strdup(str2));

    if (nb1 == NULL || nb2 == NULL || result == NULL || error(str1, str2) == 84)
        return (NULL);
    if (my_strcmp(nb2, "0") == 0)
        my_putstr("syntax error");
        return (NULL);
    result = calc_mod(nb1, nb2, result);
    n = sign_nbr(str1) * sign_nbr(str2);
    my_revstr(result);
    return (clean_result2(result, n));
}
