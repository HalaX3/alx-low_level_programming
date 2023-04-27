#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @str: new string to be added in the node
 *
 * Return: the address of the new element, or NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
