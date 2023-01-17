#include "main.h"
/**
 *free_dog - free dog
 *@d: parameter
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
