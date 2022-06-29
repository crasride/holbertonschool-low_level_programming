#include <stdio.h>
#include "dog.h"
#define NILL "(nil)"


/**
* print_dog - prints  struct
* @d: pointer to struct
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";  /** normal method  */
	if (d->owner == NULL)
		d->owner = NILL;    /** using the macro #define method  */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
