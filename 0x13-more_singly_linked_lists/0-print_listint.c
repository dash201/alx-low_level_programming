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
	int num = 0;
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	*ptr = *h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	free(ptr);
	return (num);
}
