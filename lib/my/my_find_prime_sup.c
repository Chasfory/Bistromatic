/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** returns the smallest prime number that is greater than,
** or equal to , the number given as parameter
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
        my_find_prime_sup(nb + 1);
    }
    return (0);
}
