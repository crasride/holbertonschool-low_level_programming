#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a variable
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
* @d: pointer to struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
