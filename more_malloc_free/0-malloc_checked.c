#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 **malloc_checked- allocates memory using malloc
 *@b: unsigned int
 *Return: (pointer)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
