#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **create_array- create array of character
 *@size: size of array
 *@c: characters
 *Return: (0)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *array;

	n = 0;
	array = malloc(size * sizeof(char));
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	while (n < size)
	{
		array[n] = c;
		n++;
	}
	return (array);
}
