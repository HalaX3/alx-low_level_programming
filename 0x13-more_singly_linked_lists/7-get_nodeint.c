#include "lists.h"

/**
 * get_nodeint_at_index - returns a certain node in a LL
 * @head: first node in LL
 * @index: index of node to be returned
 *
 * Return: pointer to the node we want, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int itr = 0;
	listint_t *tmp = head;

	while (tmp && itr < index)
	{
		tmp = tmp->next;
		itr++;
	}

	if (tmp)
		return (tmp);
	else
		return (NULL);
}
