#ifndef DOG
#define DOG

/**
 *struct dog - dog structures
 *@name: first parameter
 *@age: second parameter
 *@owner: thirst parameter
 *
 *Example of structure represented by a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - New type dog_t as new name for the type struct dog
*/
typedef struct dog dog_t;

#endif
