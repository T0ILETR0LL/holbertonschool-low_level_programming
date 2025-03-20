#include "main.h"

/**
 * print_rev_recursion- prints a string followed by a new line
 * @s: string
 * Return: (0) (s)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		if (*s == '\0')
		{
			_putchar('\0');
		}
		_putchar(*s);
		return;
	}
}
