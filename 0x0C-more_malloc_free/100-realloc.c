#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the mem previsouly allocated by malloc
 * @old_size: size of allocated memory for ptr
 * @new_size: new size for the new memory block
 * Return: pointer to new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *tmp;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	tmp = ptr;
	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			p[index] = tmp[index];
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			p[index] = tmp[index];
	}
	free(ptr);

	return (p);
}
