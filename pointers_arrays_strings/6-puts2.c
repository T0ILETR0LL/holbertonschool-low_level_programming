#include "main.h"

/**
 * puts2- prints every other character of a string, starting with first char
 * @str: variable
 * Return: (str)
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	str++;
	}
	_putchar('\n');
}
