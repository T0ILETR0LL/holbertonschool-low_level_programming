#include "main.h"
#include <stdio.h>

/**
 * _strstr- locates a substring
 * @s: string to scan
 * @accept: string to match
 * Return: (null) (&s)
 */
char *_strstr(char *haystack, char *needle)
{
	int n;
	int b;

	n = 0;
	while (haystack[n] != '\0')
	{
		b = 0;
		while(needle[b] == haystack[n])
		{
			b++;
			n++;
		}
		if (needle [b] == '\0')
		{
			return (&haystack[n]);
		}
		n++;
	}
	return (NULL);
}
