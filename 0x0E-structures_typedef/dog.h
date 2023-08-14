#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new defined structure
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
