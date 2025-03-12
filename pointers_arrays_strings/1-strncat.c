#include "main.h"

/**
 * _strncat - prints a string in reverse
 * @dest: string
 * @src: string
 * @n: byte
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] < src[n] && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
