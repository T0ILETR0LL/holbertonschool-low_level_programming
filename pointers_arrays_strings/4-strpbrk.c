#include "main.h"
#include <stdio.h>

/**
 * _strpbrk- legnth of a prefix substring
 * @s: string to scan
 * @accept: string to match
 * Return: (0)
 */
char *_strpbrk(char *s, char *accept)
{
	int n;
	int b;

	n = 0;
	while (s[n] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[n] == accept[b])
			{
			return (&s[n]);
			}
			b++;
		}
		n++;
	}
	return (NULL);
}
