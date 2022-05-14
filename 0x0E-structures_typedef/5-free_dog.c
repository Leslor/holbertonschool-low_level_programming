#include "dog.h"

/**
  * new_dog -  function that copi the nae and the owner data of dog
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return: Return a Structure of the dog
  */


void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL && d->owner)
	{
		free(d->owner);
	}

	if (d->owner == NULL && d->name)
	{
		free(d->name);
	}
	if (d->name && d->owner)
	{	
		free(d->name);
		free(d->owner);
	}
	free(d);
}
