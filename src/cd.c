/*
** EPITECH PROJECT, 2019
** mysh
** File description:
** cd in mysh
*/

#include "proto.h"

void bad_dest(char *array)
{
    my_putstr(array);
    my_putstr(": No such file or directory.\n");
}

int nbr_arg(char **array)
{
    int i = 0;
    while (array[i])
        i++;
    return (i);
}

void cd_home(void)
{
    const char *const home = getenv("HOME");
    if (home)
        chdir(home);
}

void my_cd(char **array)
{
    int nbr = nbr_arg(array);
    int failur;

    switch (nbr) {
    case 1:
        cd_home();
        break;
    case 2:
        if ((my_strcmp(array[1], "~")) == 0)
            cd_home();
        else if ((failur = chdir(array[1])) == -1)
                bad_dest(array[1]);
        break;
    default:
        my_putstr(array[0]);
        my_putstr(": Too many arguments.\n");
    }
}