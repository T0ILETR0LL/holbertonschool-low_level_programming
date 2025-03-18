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
		if (needle[b] == haystack[n] && needle[b] != '\0')
		{
			b++;
			n++;
			return (&haystack[n - 1]);
		}
		n++;
	}
	return (NULL);
}
