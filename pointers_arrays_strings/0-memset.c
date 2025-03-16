#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s: string
 * @b: fill
 * @n: affected
 * Return: (0)
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n)
	{
		s[n] = b;
		n--;
	}
	return(s);
}		
