# minishell

## About

Minishell is the second project of the Unix branch at Epitech. It's a minimum viable version of a real shell. The main goal is to have a good understanding of process creation and synchronisation using the C programmming language.

## Installation & Usage

### Requirements

The only requirements are:

    GNU make
    GCC

Those versions are the ones used during development.

## Building the program

    Download/Clone this repo

     git clone https://github.com/RomainLongeron/minishell.git

    cd into the root directory and run make

     cd minishell
     make

### Running the program

After building the source, run ./mysh from the project root.
Main Project Instructions
Mandatory

    Can only use C
    Must respect the school imposed coding style (The Norme)
    No memory leaks
    Implement a series of builtins: cd, setenv, unsetenv, env, exit
    Manage the errors without using errno, by displaying a message adapted to the error output
    Can only use these standard library functions:
        malloc, free
        access
        open, close, read, write
        opendir, readdir, closedir
        getcwd, chdir
        stat, lstat, fstat
        fork, execve
        wait, waitpid, wait3, wait4
        signal, kill
        exit
    Must have a Makefile to build the program
    The binary file must be named minishell
    Can use Libft
    Handle program interruption (Ctrl + D)
    Click here for the rest
