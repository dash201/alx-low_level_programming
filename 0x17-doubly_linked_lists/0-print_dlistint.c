#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 *print_dlistint - prints all the elements
 *@h: parameter
 *Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	*new = *h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		num++;
		new = new->next;
	}
	free(new);
	return (num);
}
