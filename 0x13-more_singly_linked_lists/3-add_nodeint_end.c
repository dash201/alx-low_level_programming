#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *add_nodeint_end - adds a new node at the end of a linked list
 *@head: linked list
 *@n: number of node
 *Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (tmp);
}
