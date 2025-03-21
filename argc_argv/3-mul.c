#include "main.h"
#include <stdio.h>

/**
 * main- multiplies two numbers
 * @argc: number of arguments
 * @argv: string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int result;
	(void)argv;

	if (argc == 1)
	{
		printf("ERROR\n");
		return (1);
	}
	result = (*argv[1]) * (*argv[2]);
	printf("%d\n", result);
	
	return (0);
}
