#include "main.h"
#include <stdio.h>
/**
  * _strncpy - function that  copy a String.
  * @dest:1
  * @src: str2
  * @n: Number of elements
  * Return: return dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int n_elem_src = 0, n_elem_dest = 0;
	int j;
	int limite;

	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}
	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}
	if (n < n_elem_src)
	{
		limite = n;
	}
	else
	{
		limite = n_elem_src;
	}
	for (j = 0; j < limite; j++)
	{
		dest[j] = src[j];
	}
	while (n_elem_src < n)
	{
		dest[n_elem_src] = '\0';
		n_elem_src++;
	}
	return (dest);
}
