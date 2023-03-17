#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *get_dnodeint_at_index - that returns the nth node of a dlistint_t\
 linked list.
 *@head: linked list.
 *@index: index of the node
 *Return: node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (num == index)
		{
			ptr->prev = head->prev;
			ptr->next = head->next;
			ptr->n = head->n;
		}
		num++;
		head = head->next;
	}
	if (index > num)
		return (NULL);
	return (ptr);
}
