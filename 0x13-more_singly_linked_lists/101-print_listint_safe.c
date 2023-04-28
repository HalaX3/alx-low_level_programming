#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_length(const listint_t *head);


/**
 * print_listint_safe - Prints a LL safely.
 * @head: pointer to the first element in a LL
 *
 * Return:Number of nodes in a LL
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, ind = 0;

	n = looped_listint_length(head);
	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < n; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}


/**
 * looped_listint_length - Counts the num of nodes that is not repeated
 * @head: A pointer to that first element of the listint_t
 *
 * Return: If list not looped - 0. Otherwise - no of unique nodes in a List
 */

size_t looped_listint_length(const listint_t *head)
{
	size_t n = 1;
	const listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (0);

	h = (head->next)->next;
	t = head->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				n++;
				h = h->next;
				t = t->next;
			}

			t = t->next;
			while (t != h)
			{
				t = t->next;
				n++;
			}
			return (n);
		}

		h = (h->next)->next;
		t = t->next;
	}

	return (0);
}
