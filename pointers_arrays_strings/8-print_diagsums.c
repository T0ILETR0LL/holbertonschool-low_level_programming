#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals
 * @a: string
 * @size: length of square matrix
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int n;
	int m;
	int diagonalone;
	int diagonaltwo;

	n = size + 1;
	diagonalone = 0;
	b = 0;
	while (b < size)
	{
		diagonalone += a[n * b];
		b++;
	}
	diagonaltwo = 0;
	m = size - 1;
	c = 1;
	while (c <= size)
	{
		diagonaltwo += a[m * c];
		c++;
	}
	printf("%i, %i\n", diagonalone, diagonaltwo);
}
