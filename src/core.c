/*
** EPITECH PROJECT, 2021
** core_div.c
** File description:
** core functions for div_inf.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "my.h"
#include "macro.h"

char *clean_result(char *result, int endstr, int neg)
{
    int i = 0;

    result[endstr] = '\0';
    my_revstr(result);
    while (result[i] == '0' && result[i + 1] != '\0')
        i++;
    result = &result[i];
    if (neg == 1) {
        result = my_revstr(result);
        result = my_strcat(result, "-");
        result = my_revstr(result);
    }
    return (result);
}

int longuest_str(char const *str1, char const *str2)
{
    if (my_strlen(str1) < my_strlen(str2))
        return my_strlen(str2);
    else
        return my_strlen(str1);
}

char *fill_zero(char *src, int n)
{
    char *str;
    int i = 0;
    int nb0 = n - my_strlen(src);

    str = malloc(sizeof(char) * (nb0 + 1));
    for (; i < nb0; i++) {
        str[i] = '0';
    }
    str[i] = '\0';
    return my_strcat(src, str);
}

int nbr_cmp(char const *str1, char const *str2)
{
    if (my_strlen(str1) > my_strlen(str2))
        return (1);
    if (my_strlen(str1) == my_strlen(str2)) {
        if (my_strcmp(str1, str2) == 0)
            return (3);
        if (my_strcmp(str1, str2) < 0)
            return (2);
        return (1);
    }
    return (2);
}

char *rm_sign(char *src)
{
    int i = 0;
    char *str = my_strdup(src);

    while (str[i] == '-' && str[i + 1] != '\0')
        i++;
    return (&str[i]);
}
