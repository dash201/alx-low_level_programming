#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *print_dog - print struct dog
 *@d: parameter
 *Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.1f", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
		        printf("Owner: %s", d->owner);
	}
}
