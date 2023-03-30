#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
