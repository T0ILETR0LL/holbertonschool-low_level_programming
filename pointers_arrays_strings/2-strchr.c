#include "main.h"
#include <stdio.h>

/**
 * _strchr- locates a character in a string
 * @s: string
 * @c: character
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int n;

	n = 0;
	if (c == '\0')
	{
		return (&s[n]);
	}
	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
	n++;
	}
	return (NULL);
}
