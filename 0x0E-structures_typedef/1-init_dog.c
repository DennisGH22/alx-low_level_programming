#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: The struct to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
