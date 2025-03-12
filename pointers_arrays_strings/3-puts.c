#include "main.h"

/**
 * _puts- prints string and new line to stdout
 * @str: variable
 * Return: (str)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
