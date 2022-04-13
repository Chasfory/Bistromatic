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

char *calc_add(char *nb1, char *nb2, char *result)
{
    int res = 0;

    for (int i = 0; i < my_strlen(nb1) || i < my_strlen(nb2); i++) {
        if (i < my_strlen(nb1) && i >= my_strlen(nb2))
            res = CTOI(result[i]) + CTOI(nb1[i]);
        else if (i < my_strlen(nb2) && i >= my_strlen(nb1))
            res = CTOI(result[i]) + CTOI(nb2[i]);
        else
            res = CTOI(result[i]) + CTOI(nb1[i]) + CTOI(nb2[i]);
        result[i] = ITOC(res % 10);
        result[i + 1] = ITOC(res / 10);
    }
    return (result);
}

char *add_inf(char const *str1, char const *str2)
{
    int len = my_strlen(str1) + my_strlen(str2);
    char *result = malloc(sizeof(char) * (len + 1));
    char *nb1 = my_strdup(str1);
    char *nb2 = my_strdup(str2);

    if (nb1 == NULL || nb2 == NULL || error(str1, str2) == 84 || result == NULL)
        return NULL;
    nb1 = my_revstr(nb1);
    nb2 = my_revstr(nb2);
    my_memset(result, '0', len);
    calc_add(nb1, nb2, result);
    result[len] = '\0';
    free(nb1);
    free(nb2);
    return (clean_result2(result, 1));
}
