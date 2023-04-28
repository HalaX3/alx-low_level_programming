#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a LL
 * @head: pointer that points to the forst element of a LL
 *
 * Return: data inside the node deleted, 0 otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
	{
		return (0);
	}

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
