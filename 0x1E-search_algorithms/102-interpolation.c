#include "search_algos.h"

/**
 * interpolationSearch - function that searches
 * for a value in an array of integers using
 * the Interpolation search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @low: the number of elements in array
 * @high: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int interpolationSearch(int *array, int low, int high, int value)
{
	size_t pos;

	if (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
							* (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
			return (pos);
		}
		else if (array[pos] < value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
			return (interpolationSearch(array, pos + 1, high, value));
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
			return (interpolationSearch(array, low, pos - 1, value));
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));
	if ((int)pos > high)
		printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}

/**
 * interpolation_search - function that searches
 * for a value in an array of integers using
 * the Interpolation search algorithm
 * @array: pointer to the first element
 * of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int resultado;

	if (array == NULL)
		return (-1);
	resultado = interpolationSearch(array, low, high, value);
	if (resultado >= 0)
		return (resultado);
	return (-1);
}
