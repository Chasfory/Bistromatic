/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** return 1 char
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
