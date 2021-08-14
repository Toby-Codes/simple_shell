#include "shell.h"

/**
  * exec - Receives an splitted line of strings
  * and executes the program and it's arguments
  *
  * @words: A splitted line in tokens
  * @argv: argv description.
  * @line: The 'line' pointer (used to free)
  * Return: 0
  */

int exec(char **words, char **argv, char *line)
{
	pid_t forkpid;
	int status;

	forkpid = fork();
	if (forkpid == 0)
	{
		if (execve(words[0], words, NULL) == -1)
			perror(argv[0]);
		free(line);
		freeargv(words);
		_exit(0);
	}
	else if (forkpid == -1)
	{
		perror(argv[0]);
		free(line);
		freeargv(words);
		_exit(-1);
	}
	else
	{
		wait(&status);
	}
	freeargv(words);
	free(line);
	return (0);
}
