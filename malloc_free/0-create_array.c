#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **create_array- create array of character
 *@size: 
 *@c: characters
 *Return: (0)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	*c = malloc(size * c)
	
	return (*c);
}
