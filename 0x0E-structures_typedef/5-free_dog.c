#include <stdlib.h>
#include "dog.h"

/**
  * free_dog -   function that frees dogs.
  * @d: Dog'structure.
  * Description: initialize a variable of type struct dog
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free((d));
	}

}
