#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a given position in a LL
 * @head: pointer that points to the first node in a LL
 * @idx: index where the the new node will be added
 * @n: data to be inserted in the new node
 * Return: pointer to the new node, NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int itr;
	listint_t *tmp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (itr = 0; tmp && itr < idx; itr++)
	{
		if (itr == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
