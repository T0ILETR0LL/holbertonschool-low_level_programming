/* 1-alphabet.c */

#include "main.h"

/* prints alphabet */
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
