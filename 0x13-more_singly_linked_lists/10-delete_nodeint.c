#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a LL at a given position
 * @head: pointer that points to the first element in a LL
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int itr = 0;
	listint_t *tmp = *head;
	listint_t *curr = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (itr < index - 1)
	{
		if (!(tmp->next || !tmp))
			return (-1);

		tmp = tmp->next;
		itr++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
