#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches
 * for a value in an array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt((int)size);
	int low = 0;
	int high;

	if (array == NULL)
		return (-1);
	while (array[low] < value && low <= ((int)size - 1))
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = low + jump;
	}
	high = low;
	low = low - jump;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	for (; low <= high; low++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		if (high > (int)size - 1)
			break;
	}
	return (-1);
}
