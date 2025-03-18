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
	int locate;

	n = 0;
	while (haystack[n] != '\0')
	{
		b = 0;
		locate = n;
		if (needle[b] == haystack[locate] && needle[b] != '\0')
		{
			b++;
			locate++;
			return (&haystack[locate]);
		}
		n++;
	}
	return (NULL);
}
