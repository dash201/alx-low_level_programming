#include "main.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d: first parameter
 *@name: second parameter
 *@age: thirst parameter
 *@owner: four parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
