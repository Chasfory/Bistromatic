/*
** EPITECH PROJECT, 2021
** my_print_digit.c
** File description:
** print all the digits on a single line in descending order
*/
#include <unistd.h>
#include "my.h"

int my_print_digits(void)
{
    int digit = '0';

    while (digit <= '9') {
        my_putchar(digit);
        digit++;
    }
    return (0);
}
