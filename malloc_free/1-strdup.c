#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_strdup- create array of character
 *@size: size of array
 *@c: characters
 *Return: (0)
 */
char *_strdup(char *str)
{
	char *array;
	int size;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] <= '\0')
	{
		size++;
	}
	array = malloc(size * sizeof(char));
	while (*str)
	{
		*array = *str;
	}
	return (array);
}
