#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: segment two
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (l != i)
		{
			break;
		}
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				l = l + 1;
			}
			j++;
		}
		i++;
	}
	return (l);
}
