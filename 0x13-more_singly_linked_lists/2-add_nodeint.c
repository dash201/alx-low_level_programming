#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *add_nodeint - add new node at begin
 *@head: linked list
 *@n: data
 *Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
