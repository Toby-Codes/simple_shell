#include "shell.h"
/**
  * _printenv - Print 'env' command
  * Return: void
  */

void _printenv(void)
{
	int x;
	size_t y;

	for (x = 0; environ[x] != '\0'; x++)
	{
		for (y = 0; environ[x][y] != '\0'; y++)
		{
		}
		write(1, environ[x], y);
		if (environ[x] != NULL)
			write(1, "\n", 1);
	}
}

/**
 * _getenv - gets an environment variable
 * @name: environment variable to get
 * Return: pointer to environment variable or NULL if there is no match
 */


char *_getenv(char *name)
{
	char *aux, *path;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		aux = _strstr(environ[i], name);
		if (aux != NULL)
		{
			path = malloc(_strlen(environ[i]) - _strlen(name));
			if (path == NULL)
			{
				free(path);
				perror("Can't allocate memory (env)");
				return (NULL);
			}
			_strcpy(path, aux + (_strlen(name) + 1));
			return (path);
		}
	}
	return (NULL);
}
