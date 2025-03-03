#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: variable
 * Return: (1) positive, (0) zero, (-1) negative
 */
int print_sign(int n)
{
	char positive;
	char negative;
	char zero;

	positive = '+';
	negative = '-';
	zero = '0';
	if (n > 0)
	{
		_putchar(positive);
		return (1);
	}
	if (n < 0)
	{
		_putchar(negative);
		return (-1);
	}
	else
	{
		_putchar(zero);
		return (0);
	}
}
