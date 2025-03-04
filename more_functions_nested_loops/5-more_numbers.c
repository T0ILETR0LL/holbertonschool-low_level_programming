#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times
 *
 * Return: (0)
 */
void more_numbers(void)
{
	char lines;

	lines = '0';
	while (lines <= '9')
	{
		char *number = "01234567891011121314";
		while (*number != '\0')
		{
			_putchar(*number);
			number++;
		}
		_putchar('\n');
		lines++;
	}
}
