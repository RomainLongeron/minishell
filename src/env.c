/*
** EPITECH PROJECT, 2019
** mysh
** File description:
** get env malloc
*/

#include "proto.h"

void print_env(char **env)
{
    for (int i = 0; env[i]; i++) {
        my_putstr(env[i]);
        write(1, "\n", 1);
    }
}

char *my_getenv(char **env, char *str)
{
    for (int i = 0; env[i]; i++) {
        if (my_strncmp(env[i], str, my_strlen(str)) == 0)
            return (env[i]);
    }
    return (NULL);
}

int my_strline(char **str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}