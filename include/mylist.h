/*
** EPITECH PROJECT, 2021
** mylist.h
** File description:
** struct mylist
*/
#ifndef MYLIST_H_
#define MYLIST_H_
#include "my.h"

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
