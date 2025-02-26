#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
