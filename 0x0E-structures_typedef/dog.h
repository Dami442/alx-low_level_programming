#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data type for dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
