#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - main functions
 * @size: size of the array
 * @c: character with which the array will be filled
 * Return: return the *s to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
