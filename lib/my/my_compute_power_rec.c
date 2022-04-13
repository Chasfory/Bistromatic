/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** recursive function returns the first argument
** raised to power p where p is the second argument
*/
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return (1);
    if (nb == 0)
        return (0);
    return (result = (nb * my_compute_power_rec(nb , p-1)));
}
