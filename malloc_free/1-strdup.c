#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_strdup- returns copy of string in a newly allocated space
 *@str: string
 *Return: (array) new string
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
	while (str[size] != '\0' && *str != 0)
	{
		size++;
	}
	array = malloc((size + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		array[size] = str[size];
		size ++;
	}
	array[size] = '\0';
	return (array);
}
