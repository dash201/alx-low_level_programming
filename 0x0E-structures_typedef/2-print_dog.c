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
	if (!d)
		exit;
	if (d->name == NULL)
		d->name = "(nil)");
	if (d->age == NULL)
		d->age = 0.0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.1f\nOwner: %s", d->name, d->age, d->owner);
}
