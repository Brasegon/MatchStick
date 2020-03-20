/*
** EPITECH PROJECT, 2019
** error
** File description:
** Brandon Segers
*/
#include "struct.h"

void player_error_matches(z_s *t)
{
    if (t->b > t->match) {
        my_printf("Error: you cannot remove more than %s matches", t->av[2]);
        my_printf(" per turn\n");
        player_matches(t);
        t->b = 0;
    } else if (t->tab[t->c - 1] - t->b < 0) {
        my_printf("Error: not enough matches on this line\n");
        player_matches(t);
        t->b = 0;
    } else if (my_str_isnum(t->str) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        player_matches(t);
        t->b = 0;
    }
}

void player_error(z_s *t)
{
    if (my_str_isnum(t->str) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        player_matches(t);
        t->b = 0;
    }
    else if (t->c <= 0 || t->c > t->line) {
        my_printf("Error: this line is out of range\n");
        player_matches(t);
        t->b = 0;
    }
}

int player_play(z_s *t)
{
    int i = 0;

    my_printf("\nYour turn:\n");
    i = player_matches(t);
    return (i);
}
