/*
** EPITECH PROJECT, 2018
** MatchStick
** File description:
** Brandon Segers
*/
#include "struct.h"

int     my_getnbr(char *str)
{
    long save = 0;
    int o = 1;

    while (*str != '\0') {
        if (*str == '-')
            o = o * -1;
        if (*str >= '0' && *str <= '9') {
            while (*str >= '0' && *str <= '9') {
                save = (save * 10) + *str - '0';
                str++;
            }
            save = save * o;
            if (save <= 2147483647 && save >= -2147483648)
                return (save);
            else
                return (0);
        }
        str++;
    }
    return (0);
}

void	my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0)
    {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    put(nb % 10 + '0');
}
void	put(char c)
{
    write(1, &c, 1);
}
