#include "main.h"
#include <stdio.h>

/**
 * _strspn- legnth of a prefix substring
 * @s: string to scan
 * @accept: string to match
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
        int n;
        int b;
        int length;
        int found;

        length = 0;
        n = 0;
        while (s[n] != '\0')
        {
                found = 0;
                b = 0;
                while (accept[b] != '\0' && found == 0)
                {
                        if (s[n] == accept[b])
                        {
                                length++;
                                found++;
                        }
                        b++;
                }
                if (found == 0)
                {
                        return (length);
                }
                n++;
        }
        return (length);
}
