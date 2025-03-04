#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: variable
 * Return: (n)
 */
int print_last_digit(int c)
{
        int n = c  % 10;
        if (n < 0)
        {
                n = -n;
        }
        _putchar(n + '0');
        return (n);
}
