#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring to search for
 *
 * Return: number of bytes in initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, jindex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (jindex = 0; accept[jindex] != s[index]; jindex++)
		{
			if (accept[jindex] == '\0')
				return (index);
		}
	}

	return (index);
}
