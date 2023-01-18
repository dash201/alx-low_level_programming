#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *new_dog - create new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: pointer or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *o;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		free(d);
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	return (d);
}
