#include "lists.h"

/**
 * sum_listint - calculates the sum of all the datas of a LL
 * @head: first element in LL
 *
 * Return: sum of all datas
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
