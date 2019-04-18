/*
** EPITECH PROJECT, 2019
** lib
** File description:
** basique function
*/

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *my_strdup(char *str)
{
    char *result = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int i = 0; str[i]; i++)
        result[i] =  str[i];
    return (result);
}

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    while (str1[i]) {
        if (str1[i] != str2[i])
            return (-1);
        i++;
    }
    return (0);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;

    while (count < n) {
        if (s2[count] != s1[count])
            return (1);
        count = count + 1;
    }
    return (0);
}