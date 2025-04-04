#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: fill
 * @n: affected
 * Return: (0)
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
