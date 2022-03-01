#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - main functions
 * @str: puntero de tipo char
 * Return: return the *a to the array
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *a;

	while (str[size])
		size++;
	a = malloc((sizeof(char) * size) + 1);

	if (str == NULL ||  a ==	NULL)
		return (NULL);
			
	for (i = 0; i < size; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
