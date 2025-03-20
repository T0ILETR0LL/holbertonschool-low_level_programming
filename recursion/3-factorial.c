#include "main.h"

/**
 * factorial - returns a factorial
 * @n: factorial number
 * Return: (factorial)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else
	{
	return(n*(factorial(n - 1));
	}
}
