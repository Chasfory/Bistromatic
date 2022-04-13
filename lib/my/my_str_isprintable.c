/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** return 1 if the string passed as paramaeter
** only contains printable characters and 0 otherwise
*/
#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (my_str_isalpha(str) == 1 || my_str_isnum(str) == 1)
            i++;
        else
            return (0);
    }
    return (1);
}
