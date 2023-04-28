#include "lists.h"

/**
 * add_nodeint - creates new node at the begining of a LL
 * @head: pointer to the first node in a LL
 * @n: data to be inserted into the new node
 *
 * Return: pointer to the new node, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	
	if (!new_node)
	{
		return (NULL);
	}

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
