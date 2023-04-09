#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
