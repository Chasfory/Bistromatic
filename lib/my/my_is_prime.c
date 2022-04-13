/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** function that returns 1 if the number is prime and 0 if not
*/

int my_is_prime (int nb)
{
    if (nb > 2 && (nb % 2) == 0)
        return (0);
    if (nb <= 1)
        return (0);
    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
