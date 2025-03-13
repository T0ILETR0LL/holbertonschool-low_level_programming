#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: variable
 * Return: (0)
 */
void print_rev(char *s)
{
	int end;
	end = _strlen(s);

	while (end >= 0)
	{
	_putchar(s[end]);
	end--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _strlen- returns the length of a string
 * @s: string
 * Return: (length)
 */
int _strlen(char *s)
{
	int length;
	
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length - 1);
}
