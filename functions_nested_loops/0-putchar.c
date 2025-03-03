#include "main.h"

/**
 * main - print a string
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char *str = "putchar";

	_putchar('_');
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}	
	_putchar('\n');
	return (0);
}
