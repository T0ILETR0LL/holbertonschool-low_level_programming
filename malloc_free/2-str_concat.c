#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **str_concat- adds *s2 to the end of *s1 in a newly allocated memory
 *@s1: first string
 *@s2: second string
 *Return: (array) new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int a, b, size;

	a = 0;
	b = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	size = a + b;
	new = malloc((size + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (s1[size] != '\0')
	{
		new[size] = s1[size];
		size++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		new[size] = s2[b];
		size++;
		b++;
	}
	new[size] = '\0';
	return (new);
}
