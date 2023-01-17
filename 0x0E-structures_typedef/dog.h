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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
