#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *listint_len - return the number of elements in a listint_t list
 *@h: linked list
 *Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int num = 0;
	listint_t *ptr = NULL;

	if (h == NULL)
		return (num);
	ptr = malloc(sizeof(listint_t));
	*ptr = *h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	free(ptr);
	return (num);
}
