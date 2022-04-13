/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** iterative function that returns the factorial
** of the nuber given as parameter
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (nb >= 2) {
        result *= nb;
        nb--;
    }
    return (result);
}
