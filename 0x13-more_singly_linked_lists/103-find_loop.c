#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in LL
 * @head: LL to be searched for
 *
 * Return: address of node, NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (!head)
		return (NULL);

	while (f && s && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (f == slow)
		{
			s = head;
			while (s != f)
			{
				f = f->next;
				s = s->next;
			}
			return (f);
		}
	}

	return (NULL);
}
