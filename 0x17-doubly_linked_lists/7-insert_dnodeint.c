#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: linked list
 *@idx: index list
 *@n: data
 *Return: new list or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new = add_dnodeint(h, n);
	if (*h == NULL)
		return (NULL);
	while (*h != NULL)
	{
		if (i == idx)
		{
			if (*h->next == NULL)
				tmp = add_dnodeint_end(h, n);
			else
			{
				tmp->n = n;
				tmp->prev = *h;
				*h->next = tmp;
				tmp->next = *h->next;
				*h->next->prev = tmp;
			}
			break;
		}
		*h = *h->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	return (tmp);
}
