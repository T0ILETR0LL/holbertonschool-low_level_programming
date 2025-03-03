#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: variable
 * Return: (n)
 */
int print_last_digit(int n)
{	
	int last_n;
	last_n = (n % 10);
	_putchar(last_n);
	return (n);

}
