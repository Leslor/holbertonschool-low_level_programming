#ifndef _MAIN_
#define _MAIN_

#include <stdlib.h>
#include <stdio.h>
/**
  * struct dog - Dog attributes
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Description: Structure of a dog
  * DogType: dog's typedef structure
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
#endif
