#include "main.h"
/**
  * _strcat - function that concatenates two strings.
  * @dest: str1
  * @src: str2
  * Return: return dest:x
  */

char *_strcat(char *dest, char *src)
{
	int n_elem_src = 0, n_elem_dest = 0;
	int j;

	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}
	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}
	for (j = 0; j <= n_elem_src; j++)
	{
		dest[n_elem_dest + j] = src[j];
	}
	return (dest);
}
