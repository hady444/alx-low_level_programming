#include "dog.h"
/**
 * init_dog - function to initialize variable of type struct dog
 * @d: pointer to struct dog variable which would be modified
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = (struct dog *) {name, age, owner};
}
