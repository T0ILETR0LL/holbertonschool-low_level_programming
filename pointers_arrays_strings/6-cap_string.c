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
		if (n == 0)
			if ('a' <= s[n] && 'z' >= s[n])
                        {
                                s[n] = s[n] - 32;
                        }
		if(s[n] == ' '|| s[n] == '\n' || s[n] == '\t' || s[n] == '.' || s[n] == ',' || s[n] == ';' || s[n] == '!' || s[n] == '?' || s[n] == '"' || s[n] == '(' || s[n] == ')' || s[n] == 123 || s[n] == 125)
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
