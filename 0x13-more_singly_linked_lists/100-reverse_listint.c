#include "lists.h"

/**
 * reverse_listint - function that makes a LL reversed
 * @head: pointerthat points to the first elemnet of a LL
 *
 * Return: pointer that points to the first node of a LL
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
