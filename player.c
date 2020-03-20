/*
** EPITECH PROJECT, 2019
** player
** File description:
** Brandon Segers
*/

#include "struct.h"

void player_test(z_s *t)
{
    if (t->b > 0 && t->c > 0) {
        my_printf("Player removed %d match(es) from line %d\n", t->b, t->c);
        t->tab[t->c - 1] = t->tab[t->c - 1] - t->b;
        triangle(t);
        t->z = 10;
    }
}

int player(z_s*t)
{
    my_printf("Line: ");
    t->str = get_next_line(0);
    if (t->str == NULL) {
        t->z = 100;
        t->v = 0;
        return (84);
    }
    t->c = my_getnbr(t->str);
    player_error(t);
    if (t->b > 0 && t->c > 0) {
        my_printf("Matches: ");
        t->str = get_next_line(0);
        if (t->str == NULL) {
            t->z = 100;
            t->v = 0;
            return (84);
        }
        t->b = my_getnbr(t->str);
        player_error_matches(t);
    }
}

int player_matches(z_s *t)
{
    int i = 0;
    int z = 0;

    if (t->z != 100) {
        i = player(t);
        if (i == 84)
            return (84);
        player_test(t);
    }
    while (z++ < t->line) {
        if (t->tab[z - 1] != 0)
            return (0);
    }
    t->v = 2;
    my_printf("You lost, too bad...\n");
    return (0);
}
