#include "main.h"
#include <stdio.h>

/**
 * rev_string- prints a string in reverse
 *@s: string
 */
void rev_string(char *s)
{
	int end;
	int temp;
	int start;
	end = _strlen(s);
	start = 0;
	
	while (start < end/2)
	{
	temp = s[start];
	s[start] = s[end-start];
	s[end-start] = temp;
        start++;	
	}
}

/**
 * _strlen- returns the length of a string
 * @s: string
 * Return: (length)
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length -1);
}
