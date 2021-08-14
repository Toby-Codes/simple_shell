#include "shell.h"

int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);
int _strncmp(char *s1, char *s2, int n);

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Positive byte difference if s1 > s2
 *         0 if s1 = s2
 *         Negative byte difference if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}



/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed by des.
 * @dest: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the characters string.
 *
 * Return: The length of the character string.
 */
int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	for (length = 0; s[length]; length++)
		;
	return (length);
}

/**
 * _strncmp - compares at most the first n bytes of str1 and str2.
 * @s1: This is the first string to be compared.
 * @s2: This is the second string to be compared.
 * @n: The maximum number of characters to be compared.
 * Return: if Return value < 0 then it indicates str1 is less than str2
 * if Return value > 0 then it indicates str2 is less than str1.
 * if Return value = 0 then it indicates str1 is equal to str2.
 */

int _strncmp(char *s1, char *s2, int n)
{
	int x, ret;

	for (x = 0; (s1[x] != '\0' || s2[x] != '\0') && x < n; x++)
	{
		if (s1[x] != s2[x])
		{
			ret = s1[x] - s2[x];
			break;
		}
		else
			ret = 0;
	}
	return (ret);
}


/**
 * _strcat - Concantenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: main string
 * @needle: pattern to match
 * Return: string - 0
 */

char *_strstr(char *haystack, char *needle)
{
		char *begin = haystack;
		char *pattern = needle;

		/* If first character of sub string match, check for whole string*/
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		/* If complete sub string match, return starting address */
		if (!*pattern)
			return (begin);

	return (NULL);
}
