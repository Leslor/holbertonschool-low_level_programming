#include<stdlib.h>
/**
  * array_range -  function that creates an array of integers.
  * @min: min number
  * @max: max number
  * Return: ptr
  */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
