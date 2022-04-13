/*
** EPITECH PROJECT, 2021
** man.c
** File description:
** bistromatic user manual
*/

#include "my.h"

int man(void)
{
    my_putstr("USAGE\n");
    my_putstr("./calc base operators size_read\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the ");
    my_putstr("parentheses and the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n");
    return (0);
}