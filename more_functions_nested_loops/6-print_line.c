#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ is printed
 * Return: (0)
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
