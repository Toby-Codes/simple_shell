#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/stat.h>
#include <errno.h>

extern char **environ;

int linecheck(char *line);
char *_strstr(char *haystack, char *needle);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char **tokenize(char *line);
char *_strcpy(char *dest, const char *src);
void freeargv(char **argv);
int exec(char **words, char **argv, char *line);
void _printenv(void);
char *_getenv(char *var);
int _strncmp(char *s1, char *s2, int n);
char *_getline(FILE *fp);
char **command(char **argv);
char *_strcat(char *dest, char *src);
void displayerror(char *name, char *word);

#endif