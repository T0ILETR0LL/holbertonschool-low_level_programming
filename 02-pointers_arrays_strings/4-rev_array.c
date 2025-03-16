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
	int length = n - 1;
	int temp;

	while (count < (length / 2))
	{
		temp = a[count];
		a[count] = a[length - count];
		a[length - count] = temp;
		count++;
	}
}
