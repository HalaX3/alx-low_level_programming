#include <stdlib.h>
#include "main.h"

/**
 * *set_memory - fills a given memory with zero bytes
 * @s: memory area
 * @memory_byte: char to be filled in memory
 * @num: number of times to copy memory_byte
 *
 * Return: pointer to the memory location
 */

char *set_memory(char *s, char memory_byte, unsigned int num)
{
	unsigned int itr;

	for (itr = 0; itr < num; itr++)
		s[itr] = memory_byte;

	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: number of elements in a given array
 * @size: size of element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	set_memory(p, 0, nmemb * size);

	return (p);
}
