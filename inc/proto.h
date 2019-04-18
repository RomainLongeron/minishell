/*
** EPITECH PROJECT, 2018
** proto
** File description:
** i
*/

#ifndef PROTO_
#define PROTO_

#pragma once

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>

int my_strlen(char const *str);
char *my_strdup(char *str);
int my_strcmp(char *str1, char *str2);
void my_putstr(char *str);
int my_strncmp(char const *s1, char const *s2, int n);

void print_env(char **env);
char *get_input(void);
char *my_getenv(char **env, char *str);
void catch_status(int status);
char *cmd_concat(char *str1, char *str2, char *str3);
char **parse_input(char **array, char **env);
char **malloc_array(int size);
char **str_split(char const *str, char sep);
void exec(char *str, char **array, int isCommand);
void exec_basic_command(char **array, char **env);

int nbr_arg(char **array);
void cd_home(void);
void my_cd(char **array);
void bad_dest(char *array);

char **my_setenv(char **array, char **env);
char **my_realloc(char **str, char *new, char **str2);
int my_strline(char **str);
char **my_unsetenv(char **aray, char **env);
void free_funct(char **array);
#endif /* PROTO_ */