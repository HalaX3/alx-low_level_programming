#include "main.h"

/**
 * _memcpy - copies a given no. of bytes from src to dest
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy
 *
 * Return: apointer to the destination memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
