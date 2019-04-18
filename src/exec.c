/*
** EPITECH PROJECT, 2019
** mysh
** File description:
** exec basic command
*/

#include "proto.h"

void exec(char *str, char **array, int isCommand)
{
    pid_t pid = fork();
    int status;

    if (pid < 0) {
        perror("");
        exit(84);
    } else if (pid == 0) {
        if (execve(str, array, NULL) == -1)
            perror("");
    } else {
        waitpid(pid, &status, 0);
        if (isCommand != 1)
            catch_status(status);
    }
}

void exec_basic_command(char **array, char **env)
{
    (void) array;
    char *cmd = my_strdup(array[0]);
    char *env_path = my_getenv(env, "PATH=");
    char **path = str_split(env_path, ':');
    char **tmp = str_split(path[0], '=');
    char *to_exec;
    char buffer[1024] = {0};
    char *temp = getcwd(buffer, 1024);

    path[0] = my_strdup(tmp[1]);
    for (int i = 0; path[i]; i++) {
        to_exec = cmd_concat(path[i], "/", cmd);
        if (access(to_exec, X_OK) == 0)
            return (exec(to_exec, array, 1));
    }
    if (access(cmd_concat(temp, "/", cmd), X_OK) == 0)
        return (exec(temp, array, 1));
    my_putstr(cmd);
    my_putstr(": Command not found.\n");
}