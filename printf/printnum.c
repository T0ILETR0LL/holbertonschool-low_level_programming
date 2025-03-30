#include "main.h"
#include <stdio.h>


int printnum (int n)
{
        int num;

        if (n < 0)
        {
                _putchar('-');
                num = -n;
        }
	else
	{
	num = n;
	}
	if (num / 10) /*if num is still divisible by 10 (stops at single digits)*/
	{
		printnum(num / 10);
	}
	_putchar (num % 10 + '0');
        return (num);

}
