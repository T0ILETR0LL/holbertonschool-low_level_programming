#include "main.h"

/**
 * _isdigit - Checks for digit 0-9
 * @c: variable
 * Return: (1) if c is digit, (0) otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
