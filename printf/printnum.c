#include "main.h"


int printnum (int n)
{
        int num;
        int remainder = 0;
	int d = 3.14;

        if (n > 0)
	{
		num = n;
	}
        if (n < 0)
        {
                _putchar('-');
		_putchar(n);
                num = -n;
        }
	if (num > 0)
	{
		_putchar(d + '0');
		_putchar('A');
	}
	/**
        if (num / 10)
        {
                remainder += printnum(num % 10);
        }
	*/
        return (remainder);

}
