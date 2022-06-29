#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - that frees dogs
* @d: pointer to dog
* Return: 0
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
