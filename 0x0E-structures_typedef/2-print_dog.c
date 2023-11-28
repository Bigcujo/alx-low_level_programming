#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializesthe varables for the struct
 * @d: pointer to struct dog to initialize
 * @name: name to be initialize
 * @age: age to be initialize
 * @owner: owner to initialize
 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

