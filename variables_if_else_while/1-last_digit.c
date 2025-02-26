#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - States if the last digit of a number is greater than five, less than six but is not zero, or is zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n % 10);

	{
		printf("Last digit of %i is ", last_digit);
	}

	if (last_digit > 5)
	{
		printf ("%i and is greater than 5\n", last_digit);
	}

	if (last_digit == 0)
	{
		printf("%i and is 0\n", last_digit);
	}
	
	else 
	{
		printf("%i and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
