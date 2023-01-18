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
	char *n;
	char *o;
	int i;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	n = malloc(sizeof(char) * _strlen(name));
	o = malloc(sizeof(char) * _strlen(owner));
	if (!n || !o)
	{
		free(n);
		free(o);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	return (d);
}
