#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: affected
 * Return: (0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{


	while (n)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
