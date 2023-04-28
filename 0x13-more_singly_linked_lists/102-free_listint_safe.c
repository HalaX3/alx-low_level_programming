#include "lists.h"

/**
 * free_listint_safe - frees a given LL
 * @h: pointer that points to the first element of a LL
 *
 * Return: number of elements that was in a LL that is freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t length = 0;
	int d;

	if (!*h || !h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			length++;
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			length++;
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;

	return (length);
}
