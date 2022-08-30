#include "search_algos.h"

/**
 * linear_search - function that searches
 * for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);
	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
