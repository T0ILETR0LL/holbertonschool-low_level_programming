#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 0x61;
	while (ch != 0x7B)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
