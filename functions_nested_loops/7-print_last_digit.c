#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: variable
 * Return: (n)
 */
int print_last_digit(int n)
{
	int last_n = n  % 10;
	if (n < 0)
        {
		last_n = -last_n;
	}
	_putchar(last_n + '0');
	return (last_n);
}
