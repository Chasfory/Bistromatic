/*
** EPITECH PROJECT, 2021
** my_memset.c
** File description:
** fill x memory in str with an int
*/

char *my_memset(char *str, int a, int n)
{
    int i = 0;

    while (i < n) {
        str[i] = a;
        i++;
    }
    return str;
}
