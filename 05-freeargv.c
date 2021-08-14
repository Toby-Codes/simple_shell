#include "shell.h"

/**
  * freeargv - Function to free argv (splitted tokens grid)
  * @words: Splitted tokens double array
  * Return: void
  */
void freeargv(char **words)
{
	int i;

	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}
