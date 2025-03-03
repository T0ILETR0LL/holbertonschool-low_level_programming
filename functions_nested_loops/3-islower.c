#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: variable character
 * Return: (1) lowercase or (0) not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
