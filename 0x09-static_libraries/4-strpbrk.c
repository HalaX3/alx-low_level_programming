#include "main.h"

/**
 * _strpbrk - searches in a string for any of set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if byte is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int index, jindex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (jindex = 0; accept[jindex] != '\0'; jindex++)
		{
			if (s[index] == accept[jindex])
				return (s + index);
		}
	}

	return (0);
}
