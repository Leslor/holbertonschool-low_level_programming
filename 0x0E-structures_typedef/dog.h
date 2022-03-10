#ifndef _MAIN_
#define _MAIN_

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
void print_dog(struct dog *d);
#endif