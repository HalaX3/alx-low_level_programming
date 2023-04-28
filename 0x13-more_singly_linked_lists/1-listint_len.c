#include "lists.h"

/**
 * listint_len - function that returns the no of element in LL
 * @h: linked list
 *
 * Return: number of nodes in a LL
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
