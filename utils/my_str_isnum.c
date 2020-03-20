/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** d
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            j = 1;
        i++;
    }
    if (j == 1)
        return (0);
    else
        return (1);
}
