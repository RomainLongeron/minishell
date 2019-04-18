/*
** EPITECH PROJECT, 2019
** mysh
** File description:
** manage imput
*/

#include "proto.h"

char **parse_input(char **array, char **env)
{
    char *command = my_strdup(array[0]);

    if (my_strcmp(command, "cd") == 0) {
        my_cd(array);
        return (env);
    }
    if (my_strcmp(command, "") == 0)
        return (env);
    if (my_strcmp(command, "exit") == 0) {
        free_funct(array);
    }
    if (my_strcmp(command, "env") == 0) {
        print_env(env);
        return (env);
    }
    if (my_strncmp(command, "./", 2) == 0) {
        exec(command, array, 0);
        return (env);
    }
    exec_basic_command(array, env);
    return (env);
}

char **malloc_array(int size)
{
    char **array = malloc(sizeof(char *) * size);

    for (int i = 0; i < size; i++)
        array[i] = malloc(size);
    return (array);
}

void catch_status(int status)
{
    if (status == 139)
        my_putstr("Segmentation fault (core dumped)\n");
    if (status == 11)
        my_putstr("Segmention fault\n");
}

char *get_input(void)
{
    char *input;
    size_t len = 0;
    int size = getline(&input, &len, stdin);

    if (size == -1)
        return (NULL);
    input[size - 1] = '\0';
    return (input);
}

void free_funct(char **array)
{
    for (int i = 0; array[i] != NULL; i ++)
        free(array[i]);
    free(array);
    my_putstr("exit\n");
    exit(0);
}