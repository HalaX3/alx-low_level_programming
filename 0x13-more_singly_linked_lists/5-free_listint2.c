#include "lists.h"

/**
 * free_listint2 - function that frees a LL
 * @head: pointer to a LL to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
