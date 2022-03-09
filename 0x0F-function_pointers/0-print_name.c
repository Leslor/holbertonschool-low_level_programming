#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name -  function that prints a name
  * @name: pointer type char
  * @f : pointer to function
  * Description: Print the dog' struct
  */

void print_name(char *name, void (*f)(char *))
{
	/* Invoking print_name_asis() using f */
	f(name);
}
