#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 != s2)
	{
		return(s1[0] - s2[0]);
	}
	else
	{
		return (0);
	}
}
