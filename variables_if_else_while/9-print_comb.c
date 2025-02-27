#include <stdio.h>

/**
 * main - print 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;
	char space;
	char comma;

	space = 0x20;
	comma = 0x2C;
	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number < '9')
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
