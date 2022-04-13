/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display one-by-one the character of a string
*/
#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}
