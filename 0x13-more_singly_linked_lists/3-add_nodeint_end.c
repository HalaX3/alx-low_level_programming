#include "lists.h"

/**
 * add_nodeint_end - functions that adds a node at the end of a LL
 * @head: pointer that points to the first element of a LL
 * @n: data to be inserted at the end of a LL
 *
 * Return: pointer to the new node, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;

	return (new_node);
}
