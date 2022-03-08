#include <stdio.h>
#include "dog.h"

/**
  * init_dog -  Funtion that initialize a variable of type struct dog.
  * @d: Dog'structure.
  * @name: Dog's name
  * @age: Dog's age.
  * @owner: Dog's owner
  * Description: initialize a variable of type struct dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name ? (*d).name: "(nil)");
		printf("Age: %f\n", (*d).age ? (*d).age: 0 );
		printf("Owner: %s\n", (*d).owner ? (*d).owner: "(nil)");
	}
}
