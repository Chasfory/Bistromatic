/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** infinite addition withe two strings
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "my.h"
#include "macro.h"
#include "bistro.h"

char *calc_mult(char *nb1, char *nb2, char *result)
{
    int res = 0;

    nb1 = skip_sign(nb1);
    nb2 = skip_sign(nb2);
    for (int i = 0; nb1[i]; i++) {
        for (int j = 0; nb2[j]; j++) {
            res = CTOI(result[i + j]) + CTOI(nb1[i]) * CTOI(nb2[j]);
            result[i + j] = ITOC(res % 10);
            result[i + j + 1] = ITOC(CTOI(result[i + j + 1]) + res / 10);
        }
    }
    return (result);
}

char *mult_inf(char const *str1, char const *str2)
{
    int n = 1;
    int len = my_strlen(str1) + my_strlen(str2);
    char *result = malloc(sizeof(char) * (len + 1));
    char *nb1 = my_strdup(str1);
    char *nb2 = my_strdup(str2);

    if (nb1 == NULL || nb2 == NULL || result == NULL || error(str1, str2) == 84)
        return NULL;
    nb1 = my_revstr(nb1);
    nb2 = my_revstr(nb2);
    my_memset(result, '0', len);
    calc_mult(nb1, nb2, result);
    result[len] = '\0';
    free(nb1);
    free(nb2);
    n = sign_nbr(str1) * sign_nbr(str2);
    return (clean_result2(result, n));
}
