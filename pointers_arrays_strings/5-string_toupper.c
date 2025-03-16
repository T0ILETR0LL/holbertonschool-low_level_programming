#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: (string
 */
char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
	
		if ('a' <= s[n] && 'z' >= s[n])
		{
			s[n] = s[n] - 32;
		}
		n++;
	}
	return(s);
}
