#include "dog.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: ..
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


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
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	newdog->owner = strcpy(newdog->owner, owner);
	newdog->age = age;
	newdog->name = strcpy(newdog->name, name);

	return (newdog);
}
