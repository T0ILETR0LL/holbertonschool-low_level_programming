#include "main.h"

/**
 * reverse_array- reverses the content of an array of intergers
 * @a: string
 * @n: number of elements of array
 * Return: (0)
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	char temp;

	while (count < (n / 2))
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;

		count++;
	}
}
