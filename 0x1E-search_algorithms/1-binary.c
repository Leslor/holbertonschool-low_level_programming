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
	int mid;

	if (array == NULL)
		return (-1);
	while ((high - low) > 1)
	{
		printf("Searching in array: ");
		printf("%d", array[low]);
		for (low += 1; low <= high; low++)
			printf(", %d", array[low]);
		printf("\n");
		mid = (high + low) / 2;
		printf("%d", mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}
	return (-1);
}
