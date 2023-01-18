#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_strlen -  returns the length of a string
 *@s: parameter
 *Return: length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
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
	int i;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * _strlen(name));
	d->owner = malloc(sizeof(char) * _strlen(owner));
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->age = age;
	return (d);
}
