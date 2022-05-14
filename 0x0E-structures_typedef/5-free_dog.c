#include "dog.h"

/**
  * free_dog -  function that free the dog structure
  * @d: pointer to Dog structure
  * Return: ...
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
