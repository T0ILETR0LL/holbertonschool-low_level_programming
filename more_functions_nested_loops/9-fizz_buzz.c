#include "main.h"
#include <stdio.h>

/**
 * main - prints fizzbuzz
 * 
 * Return: (0)
 */
int  main(void)
{
	int n;
	int div3;
	int div5;

	n = 1;
	for (n = 1; n < 100; n++)
	{
		div3 = n % 3;
		div5 = n % 5;
		if (div3 == 0 && div5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (div3 == 0 && div5 != 0)
		{
			printf("Fizz ");
		}
		if (div5 == 0 && div3 != 0)
		{
			printf("Buzz ");
		}
		if (div5 != 0 && div3 != 0)
		{
			printf("%d ", n);
		}
	}
	printf("Buzz");
	printf("\n");
	return(0);
}
