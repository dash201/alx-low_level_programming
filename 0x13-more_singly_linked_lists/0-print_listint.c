#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *print_listint - prints all the elements of a listint_t list
 *@h: linked list
 *Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int n = 0;
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	*ptr = *h;
	while (ptr != h)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	free(ptr);
	return (n);
}
