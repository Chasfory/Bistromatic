/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** return the square root of the given parameter.
** return 0 if the parameter is not a whole number
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb <= 0)
        return (0);
    while (i < (nb / 2)) {
        if ((i * i) == nb)
            return i;
        else
            i++;
    }
    return (0);
}
