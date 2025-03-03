#include "main.h"

int main (void)
{
	char *str = "putchar";

	_putchar('_');
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}	
	_putchar('\n');
	return (0);
}
