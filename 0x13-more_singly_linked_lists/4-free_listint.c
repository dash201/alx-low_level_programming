#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *free_listint - frees a listint_t list
 *@head: linked list
*/
void free_listint(listint_t *head)
{
	listint_t tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
