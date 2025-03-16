#include "main.h"

/**
 * cap_string- capitalises all words of a string
 * @a: string
 * Return: (0)
 */
char *cap_string(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		if(s[n] == '\t')
		{
			s[n] = '.';
		}
		if(s[n] == ' ' || s[n] == '\n' || s[n] == '.')
		{
			if ('a' <= s[n+1] && 'z' >= s[n+1])
			{
				s[n+1] = s[n+1] - 32;
			}
		}
		n++;
	}
	return (s);
}
