#include <stdlib.h>
#include "dog.h"

/**
  * init_dog -  Funtion that initialize a variable of type struct dog.
  * @d: Dog'structure.
  * @name: Dog's name
  * @age: Dog's age.
  * @owner: Dog's owner
  * Description: initialize a variable of type struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
