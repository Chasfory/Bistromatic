/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** return the swap of 2 integers whose adresses are given as parameters
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
