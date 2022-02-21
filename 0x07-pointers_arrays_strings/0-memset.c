#include "main.h"
/**
  * _memset - function that reverses the content of an array of integers
  * @s: Starting address of memory to be filled
  * @b: Value to be filled
  * @n: Number of bytes to be filled
  * Return: return the new value of the array s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	return (s);
}
