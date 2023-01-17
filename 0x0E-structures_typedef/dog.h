#ifndef DOG
#define DOG

/**
 *struct dog - dog structures
 *@name: first parameter
 *@owner: second parameter
 *@age: thirst parameter
 *
 *Example of structure represented by a dog
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 *dog_t - New type dog_t as new name for the type struct dog
*/
typedef struct dog dog_t;

#endif
