#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: number of arguments
 * @argv: string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int result;
	int n;

	n = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (n < argc) 
	{
		if (*argv[n] < 48 && *argv[n] > 57)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[n]);
		n++;
	}
	printf("%d\n", result);
	return (0);
}
