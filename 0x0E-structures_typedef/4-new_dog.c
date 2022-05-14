#include "dog.h"

/**
  * new_dog -  function that copi the nae and the owner data of dog
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return: Return a Structure of the dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
