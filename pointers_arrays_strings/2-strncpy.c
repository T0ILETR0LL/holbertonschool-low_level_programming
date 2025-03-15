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

	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (n < a)
	{
		dest [a] = '\0';
		n++;
	}
	return (dest);
}
