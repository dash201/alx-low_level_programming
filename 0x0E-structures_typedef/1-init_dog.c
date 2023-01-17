#include "main.h"
#include <stddef.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: first parameter
 *@name: second parameter
 *@age: thirst parameter
 *@owner: four parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dd;

	dd = malloc(sizeof(struct dog));
	if (dd == NULL)
		return (NULL);
	dd->name = name;
	dd->owner = owner;
	dd->age = age;
	return (dd);
}
