#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
	{
	va_list list;
	int index = 0; 
	unsigned int a;
	char *s;
	int d;
	


	if (!format)
	{
		return (-1);
	}

	va_start(list, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			if (!format[index + 1])
			{
				return (-1);
			}
		index = index + 1;	
		switch(format[index])
                	 {
                        	case 'c' : a = va_arg(list, int);
                                   _putchar (a);
				index++;
                                   break;
                        	case 's' : s = va_arg(list, char *);
                               	  puts(s);
				index++;
                                   break;
                        	case '%' : a = va_arg(list, int);
                                   _putchar('%');
				index ++;
                                   break;
				case 'd' : a = printnum(va_arg(list,int));
				while
				{

					
					   //putchar here but its a string

				index++;
                        }
		}
		if (format[index] != '%')
		{
			_putchar(format[index]);
		}
	index++;
	}
	va_end(list);
	return (index);
	}

