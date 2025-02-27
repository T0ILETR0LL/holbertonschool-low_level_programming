#include <stdio.h>

/**
 * main - print alphabet backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char last_letter;

	letter = 'z';
	last_letter = 'a' - 1;

	while (letter != last_letter)
	{
		putchar(letter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
