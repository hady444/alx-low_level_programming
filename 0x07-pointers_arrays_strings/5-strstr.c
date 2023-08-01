#include "main.h"
/**
 * strstr - jj
 * @haystack: kjn
 * @needle: njb
 * Return: knj
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

        for (i = 0; needle[i] != '\0'; i++)
        {
                for (j = 0; haystack[j] != '\0'; j++)
                {
                        if (haystack[j] == needle[i])
                                return (needle + i);
                }
        }
        return ('\0');
}
