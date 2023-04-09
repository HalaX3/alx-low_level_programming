#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring isn't found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hptr, *nptr;

	while (*haystack != '\0')
	{
		hptr = haystack;
		nptr = needle;

		while (*nptr == *haystack && *nptr != '\0' && *haystack != '\0')
		{
			haystack++;
			nptr++;
		}

		if (*nptr == '\0')
			return (hptr);

		haystack = hptr + 1;
	}

	return (0);
}
