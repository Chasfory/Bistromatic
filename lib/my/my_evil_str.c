/*
** EPITECH PROJECT, 2021
** my_str_evil.c
** File description:
** swap each of the string character, 2 by 2
*/

#include "my.h"

char *my_evil_str(char *str)
{
    int len = my_strlen(str)-1;
    char temp;

    for (int i = 0; i < len; i++) {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
    }
    return (str);
}
