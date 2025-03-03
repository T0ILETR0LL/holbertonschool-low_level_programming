#include "main.h"

/**
 * _islower - checks for lowercase character
 * c = variable
 * return (1) = c is lowercase
 * return (0) = c is not lowercase
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
