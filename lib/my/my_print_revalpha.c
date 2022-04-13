/*
** EPITECH PROJECT, 2021
** my_print_revalpha.c
** File description:
** display the lowercase alphabet in descending order begining with z
*/
#include <unistd.h>
#include "my.h"

int my_print_revalpha(void)
{
    char letter = 'z';

    while (letter >= 'a') {
        my_putchar(letter);
        letter--;
    }
    return (0);
}
