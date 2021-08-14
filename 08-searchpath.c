#include "shell.h"

/**
 * command - entry point
 * @words: arguments passed to the function
 * Return: words
 */

char **command(char **words)
{
	char *path = NULL, *token = NULL, *concat = NULL;
	struct stat st;
	int size = 0;

	if (stat(words[0], &st) == 0)
		return (words);
	path = _getenv("PATH");
	token = strtok(path, ":");
	while (token)
	{
		size = _strlen(words[0]) + _strlen(token);
		concat = malloc(sizeof(char) * (size + 2));
		if (concat == NULL)
		{
			free(concat);
			return (NULL);
		}
		concat = _strcpy(concat, token);
		concat = _strcat(concat, "/");
		concat = _strcat(concat, words[0]);
		if (stat(concat, &st) == 0)
		{
			free(words[0]);
			size = _strlen(concat);
			words[0] = malloc(sizeof(char) * size + 1);
			if (words[0] == NULL)
			{
				free(words[0]);
				return (NULL);
			}
			words[0] = _strcpy(words[0], concat);
			free(concat);
			free(path);
			return (words);
		}
		free(concat);
		token = strtok(NULL, ":");
	}
	free(path);
	return (words);
}
