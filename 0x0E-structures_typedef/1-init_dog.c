#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes a variable of type struct dog
  * @d: Struct
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Dog owner
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
