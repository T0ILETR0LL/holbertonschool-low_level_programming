#include "main.h"
#include <stdio.h>

/**
 * main- prints number of arguments
 * @argc: number of arguments
 * @argv: string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
