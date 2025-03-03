#include "main.h"

/**
  print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	char start;
	
	start = '0';
	while (start <= '9')
	{
		letter = 0x61;
		while (letter != 0x7B)
		{
			_putchar(letter);
			letter++;
		}
		start++;
		_putchar('\n');
		
		}
}
