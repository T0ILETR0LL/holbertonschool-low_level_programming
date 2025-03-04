#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ is printed
 * Return: (0)
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
