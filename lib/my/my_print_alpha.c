/*
** EPITECH PROJECT, 2021
** my_print_alpha.c
** File description:
** display the lower case alphabet on a
** single line in ascending order
*/
#include <unistd.h>
#include "my.h"

int my_print_alpha(void)
{
    char letter = 'a';

    while (letter <= 'z') {
        my_putchar(letter);
        letter++;
    }
    return (0);
}
