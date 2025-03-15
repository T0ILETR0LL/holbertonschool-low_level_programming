#include "main.h"

/**
 * _strncpy- copies a string
 * @dest: destination string
 * @src: source string
 * @n : number of characters
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	while (b < n)
	{		
		dest [b] = '\0';
		b++;
	}
	return (dest);
}
