/*
** EPITECH PROJECT, 2021
** infin_add
** File description:
** infinite multiplication of two strings
*/

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "my.h"
#include "macro.h"

int error(char const *str1, char const *str2);

char *clean_result2(char *result, int n)
{
    int i = 0;

    my_revstr(result);
    while (result[i] == '0' && result[i + 1] != '\0')
        i++;
    if (n == -1) {
        i--;
        result[i] = '-';
        return (&result[i]);
    }
    return (&result[i]);
}

int sign_nbr(char const *str)
{
    int n = 1;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            n *= -1;
    }
    return (n);
}

char *skip_sign(char *nb)
{
    int i = 0;

    nb = my_revstr(nb);
    for (i = 0; nb[i] == '-' || nb[i] == '+'; i++);
    return (my_revstr(&nb[i]));
}

int is_neg(char const *str)
{
    if (str[0] == '-')
        return (1);
    return (0);
}
