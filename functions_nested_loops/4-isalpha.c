#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: variable character
 * Return: (1) letter or (0) not letter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
