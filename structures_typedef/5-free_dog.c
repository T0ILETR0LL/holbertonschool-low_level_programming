#ifndef DOG_H
#define DOG_H


/**
 * struct dog - new type
 * @name: name
 * @age: age
 * @owner: owner
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
