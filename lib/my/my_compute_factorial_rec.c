/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec.c
** File description:
** write a recursive function that returns
** the factorial of the number given as a parameter
*/

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0 || nb == 1) {
        return (1);
    }
    return (result = (nb * my_compute_factorial_rec(nb-1)));
}
