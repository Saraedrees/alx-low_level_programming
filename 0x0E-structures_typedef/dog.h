#ifndef _DOG_H__
#define _DOG_H__

/**
 * struct dog - define a new type struct dog with the following elements
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
