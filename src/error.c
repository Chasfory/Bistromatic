/*
** EPITECH PROJECT, 2021
** error handling
** File description:
** error handling
*/

#include <stddef.h>
#include "my.h"

char *error(char const *str1, char const *str2)
{
    if (str1 == NULL || str2 == NULL)
        return (NULL);
    for (int i = 0; str1[i]; i++)
        if (!((str1[i] >= '0' && str1[i] <= '9') || (str1[i] == '-')))
            return (NULL);
    for (int i = 0; str2[i]; i++)
        if (!((str2[i] >= '0' && str2[i] <= '9') || (str2[i] == '-')))
            return (NULL);
    return (0);
}

int nbr_av(int ac)
{
    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr("./calc");
        my_putstr(" base ops\"()+-*/%\" exp_len\n");
        return (1);
    }
    return (0);
}

