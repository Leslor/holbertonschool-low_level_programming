#include "main.h"
#include <stdio.h>
/**
  * _strchr - function that locates a character in a string
  * @s: The string
  * @c: the character to match
  * Return: Returns a pointer to dest.
  */
char *_strchr(char *s, char c)
{
	int counter = 0, iterator = 0;

	while (s[counter])
	{
		counter++;
	}
	while (iterator < counter + 1)
	{
		if (s[iterator] == c)
		{
			return (&s[iterator]);
		}
		if (s[iterator] == '\0')
		{
			return (NULL);
		}
		iterator++;
	}

	return (0);
}
