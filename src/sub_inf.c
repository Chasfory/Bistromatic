/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** infinite substraction of two strings
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "my.h"
#include "macro.h"
#include "bistro.h"

char *sub(char *nb1, char *nb2, char *result)
{
    int res = 0;

    for (int i = 0; i < my_strlen(nb1) || i < my_strlen(nb2); i++) {
        if (CTOI(nb1[i]) < CTOI(nb2[i])) {
            res = (CTOI(nb1[i]) + 10) - CTOI(nb2[i]);
            result[i] = ITOC(res);
            nb2[i + 1] = nb2[i + 1] + 1;
        }
        else
            res = CTOI(nb1[i]) - CTOI(nb2[i]);
        result[i] = ITOC(res);
    }
    return (result);
}

char *add_sub(char *nb1, char *nb2, char *result, int llen)
{
    nb1 = my_revstr(nb1);
    nb2 = my_revstr(nb2);
    result = add_inf(nb1, nb2);
    result[llen] = '\0';
    result = my_revstr(result);
    result = my_strcat(result, "-");
    result = my_revstr(result);
    return result;
}

char *sub_inf(char const *str1, char const *str2)
{
    int llen = longuest_str(str1, str2);
    char *result = malloc(sizeof(char) * (llen + 1));
    char *nb1 = fill_zero(my_revstr(rm_sign(my_strdup(str1))), llen);
    char *nb2 = fill_zero(my_revstr(rm_sign(my_strdup(str2))), llen);

    if (is_neg(str1) == 0 && is_neg(str2) == 1)
        return result = add_inf(my_revstr(nb1), my_revstr(nb2));
    if (is_neg(str1) == 1 && is_neg(str2) == 1) {
        if (nbr_cmp(str1, str2) == 1)
            return result = clean_result(sub(nb1, nb2, result), llen, 1);
        result = sub(nb2, nb1, result);
    }
    if (is_neg(str1) == 1)
        return add_sub(nb1, nb2, result, llen);
    if (nbr_cmp(str1, str2) == 2)
        return result = clean_result(sub(nb2, nb1, result), llen, 1);
    result = sub(nb1, nb2, result);
    free(nb1);
    free(nb2);
    return (clean_result(result, llen, 0));
}
