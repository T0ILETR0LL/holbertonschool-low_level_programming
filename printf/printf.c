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
                               	  while (*s)
					  {
						  _putchar(*s);
						  s++;
					  }
				index++;
                                   break;
                        	case '%' : a = va_arg(list, int);
                                   _putchar('%');
				index ++;
                                   break;
				case 'd' : printnum(va_arg(list,int));
					   index ++;
					break;
				case 'i' : printnum(va_arg(list,int));
					   index++;
					   break;
			 }
		}
	_putchar(format[index]);
	index++;
	}
	va_end(list);
	return (index);
	}

