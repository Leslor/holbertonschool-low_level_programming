#include "main.h"
/**
  * _memcpy - function that copy a block of memory from a location to another
  * @dest: Starting address of memory to be filled
  * @src: address to be filled
  * @n: Number of bytes to be filled
  * Return: Returns a pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
