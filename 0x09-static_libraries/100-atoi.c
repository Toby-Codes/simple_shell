#include "holberton.h"
#include <stdio.h>

/**
 * _atoi -  convert a string to an integer.
 * @s: string convert to  an integer.
 * Return: void
 */
int _atoi(char *s)
{
	int i = 0;
	int aux = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			aux = aux * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		if (s[i] == ';')
		{
			break;
		}
		i++;
	}
	return (num * aux);
}
