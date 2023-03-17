#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *dlistint_len - print the number of element
 *@h: list linked
 *Return: number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *ptr = NULL;

	if (h == NULL)
		return (num);
	ptr = malloc(sizeof(dlistint_t));
	*ptr = *h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	free(ptr);
	return (num);
}
