#include "shell.h"

/**
 * linecheck - entry point
 * @line: line
 * Return: always 0
 */


int linecheck(char *line)
{
	int y = 0, x = 0;

	for (x = 0; line[x] != '\0'; x++)
	{
		if (line[x] >= 33 && line[x] <= 126)
			y++;
	}
	if (y == 0)
	{
		free(line);
		return ('\n');
	}

	if (line[0] == '\n')
	{
		free(line);
		return ('\n');
	}
	if (_strcmp(line, "exit\n") == 0)
	{
		free(line);
		return (-1);
	}
	if (_strcmp(line, "env\n") == 0)
	{
		_printenv();
		free(line);
		return (1);
	}
	return (0);
}
