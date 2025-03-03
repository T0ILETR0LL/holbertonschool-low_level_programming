#include "main.h"

/**
 * print_alphabet - prints alphabet ASCII
 */
void print_alphabet(void)
{
	char letter;

	letter = 0x61;
	while (letter != 0x7B)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
