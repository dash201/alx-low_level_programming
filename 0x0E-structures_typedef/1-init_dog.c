#include "main.h"
#include <stdlib.h>
/**
 *init_dog - initialize a variable of type struct dog
 *@d: first parameter
 *@name: second parameter
 *@age: thirst parameter
 *@owner: four parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ddog;

	ddog = d;
	ddog->name = name;
	ddog->owner = owner;
	ddog->age = age;
}
