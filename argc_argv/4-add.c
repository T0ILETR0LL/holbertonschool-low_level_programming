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
	char *string;
	int i;

	n = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (n < argc)
	{
		string = argv[n];
		i = 0;
		while (string[i] != '\0')
			{
				if (string[i] < 48 || string[i] > 57)
					{
					printf("Error\n");
					return (1);
					}
				i++;
			}
		result += atoi(argv[n]);
		n++;
	}
	printf("%d\n", result);
	return (0);
}
