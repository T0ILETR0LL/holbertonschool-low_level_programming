#include "main.h"

/**
 * puts_half- prints half a string
 * @str: string
 * Return: (0)
 */
void puts_half(char *str)
{
	int length;
	int n;
	int half;

	length = _strlen(str);
	n = (length + 1) / 2;
	half = length / 2;

	if (length % 2 == 0)
	{
		while (half < length)
		{
		_putchar(str[half]);
		half++;
		}
		_putchar('\n');
	}
	else
	{
		while (n <= length - 1)
		{
		_putchar(str[n]);
		n++;
		}
		_putchar('\n');
	}
}

/**
 * _strlen- returns the length of a string
 * @str: string
 * Return: (0)
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
