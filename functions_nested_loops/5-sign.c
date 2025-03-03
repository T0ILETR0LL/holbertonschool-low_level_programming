#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: variable
 * Return: (1) positive, (0) zero, (-1) negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
