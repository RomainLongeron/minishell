/*
** EPITECH PROJECT, 2019
** mysh
** File description:
** copy tcsh terminal
*/

#include "proto.h"

char *cmd_concat(char *str1, char *str2, char *str3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *result = malloc(sizeof(char) *
            (my_strlen(str1) + my_strlen(str2) + my_strlen(str3) + 1));

    for (; str1[i]; i++)
        result[i] = str1[i];

    for (; str2[j]; j++)
        result[i + j] = str2[j];

    for (; str3[k]; k++)
        result[i + j + k] = str3[k];

    return (result);
}

char **str_split(char const *str, char sep)
{
    int i = 0;
    int a = 0;
    int b = 0;
    char **array = malloc_array(1024);

    while (str[i]) {
        if (str[i] == sep) {
            array[a++][b] = '\0';
            i++;
            b = 0;
        }
        array[a][b++] = str[i++];
    }
    array[a++][b] = '\0';
    array[a] = NULL;
    return (array);
}

int main(int ac, char **av, char **env)
{
    char *input;
    (void) ac;
    (void) av;

    while (1) {
        my_putstr(isatty(0) == 1 ? "$>" : "");
        input = get_input();
        if (input == NULL)
            break;
        env = parse_input(str_split(input, ' '), env);
    }
    my_putstr("exit\n");
    return (0);
}