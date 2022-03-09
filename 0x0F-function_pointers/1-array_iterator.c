#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator -  function that executes a function give
  * as a parameter on each element of an array.
  * @array: ...
  * @size :  size of the array
  * @action: pointer to a function
  * Return: ....
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	if (array == NULL || action == NULL || size <= 0)
	{
		return;
	}

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
