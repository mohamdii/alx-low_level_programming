#ifndef DOG_H
#define DOG_H
/**
 * struct dog - list of a dog owner
 * @age: age of dog
 * @owner: name of owner
 * @name: name of dog
 *
 * Description: this is what could possibly be stored
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
