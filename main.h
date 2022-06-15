#ifndef _MAIN_H
#define _MAIN_H

#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern char **environ;


// functions prototype 
char *_display_input(void);
void _prompt(void);
char *_strcat(char *src);
int _strlen(char *str);
void _place(char *str);
char *_find_file(char *str_f);
char *_find_command(char *str_f);
int _strcomp(char *str1, char *str2);
int _strcmpdir(char *str1, char *str2);
int _charput(char c);
void _place(char *str);
char *_strconcat(char *str1, char *str2);
int _find_slash(char *cmd);
int _compare_exit(char *str1, char *str2);
int _compare_env(char *str1, char *str2);
void _execute_proc(char **cmd);
char **_locate_string(char *str_p);
void _controlC(int sig);
#endif
