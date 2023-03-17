#include "lists.c"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *free_dlistint -  frees a dlistint_t list.
 *@head: dlistint_t list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
