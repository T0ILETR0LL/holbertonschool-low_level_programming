#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && n != '\0')
	{
		n++;
	}
	if(s1[n] != s2[n])
	{
		return (s1[n] - s2[n]);
	}
	else
	{
		return(0);
	}
}
