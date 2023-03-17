#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *add_dnodeint - add new node at the beginning
 *@head: dlist
 *@n: data
 *Return: the address of the new element or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
