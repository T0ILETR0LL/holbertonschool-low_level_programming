#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: string
 * Return: (0)
 */
void print_chessboard(char (*a)[8])
{
	int n;
	int b;

	n = 0;
	while (n < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[n][b]);
			b++;
		}
		_putchar('\n');
		n++;
	}
}
