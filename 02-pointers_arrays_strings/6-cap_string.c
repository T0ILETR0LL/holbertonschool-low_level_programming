#include "main.h"

/**
 * cap_string- capitalises all words of a string
 * @s: string
 * Return: (0)
 */
char *cap_string(char *s)
{
	int n;
	char separator[] = " ,.!?()?\"\n\t{}";
	int a;

	n = 0;
	while (s[n] != '\0')
	{
		if (n == 0)
			if ('a' <= s[n] && 'z' >= s[n])
			{
				s[n] = s[n] - 32;
			}
		a = 0;
		while (separator[a] != '\0')
		{
			if (s[n] == separator[a])
			{
				if ('a' <= s[n + 1] && 'z' >= s[n + 1])
				{
					s[n + 1] = s[n + 1] - 32;
				}
			}
			a++;
		}
	n++;
	}
	return (s);
}
