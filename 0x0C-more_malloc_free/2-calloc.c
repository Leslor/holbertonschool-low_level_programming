#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: numbers of elements.
 * @size: size of elements
 * Return: return the pointer or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int lens, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	lens = nmemb * size;
	ptr = malloc(lens);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= lens; i++)
		ptr[i] = '0';
	return (ptr);
}
