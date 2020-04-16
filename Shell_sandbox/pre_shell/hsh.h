#ifndef HOLBERTON_H
#define HOLBERTON_H

#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>

extern char **environ;

/**
* struct builtin - struct that contains the builtin commands
* @b_name: name of the command
* @b_func: pointer to a function
*/
typedef struct builtin
{
	char *b_name;
	int (*b_func)();
} builtin_struct;

int loop;
char *hsh_home;
int errcode;

char *_itoa(int num);

/*Builtin functions*/
int (*find_builtins(char *user_input))();
int exit_func(void);
int env_func(void);

char *_strdup(char *s);
void change_equal_sig(char *str);
char *ret_path_line();
void error_msg(char **args);
char **get_path(char *args);
char *_insert_path(char **args, char **path);
char **getenvpath(void);
void freedom(int n, ...);
int non_interactive_mode(void);
int _interactive(char **av __attribute__((unused)));
int necklace_pearls(char *buffer);
char **parsing(char *buffer, int characters);
int execo(char **args);

#endif
