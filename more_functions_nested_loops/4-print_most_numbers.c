#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9, not including 2 and 4
 *
 * Return: (0)
 */
void print_most_numbers(void)
{
	char *number = "01356789";

	while (*number != '\0')
	{
		_putchar(*number);
		number++;
	}
	_putchar('\n');
}
