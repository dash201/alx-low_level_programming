#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *free_dlistint -  frees a dlistint_t list.
 *@head: dlistint_t list.
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
