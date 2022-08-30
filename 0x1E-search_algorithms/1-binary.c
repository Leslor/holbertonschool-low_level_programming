#include "search_algos.h"

/**
 * binary_search - function that searches
 * for a value in an array of integers using
 * the Bnary search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int mid, i;

	if (array == NULL)
		return (-1);
	while (high >= low)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
