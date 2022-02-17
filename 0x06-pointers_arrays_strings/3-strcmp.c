#include "main.h"
#include <stdio.h>
/**
  * _strcmp - function that  copy a String.
  * @s1: str1e
  * @s2: str2
  * Return: return c
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c;

	while (s1[i])
	{
		c = s1[i] - s2[i];
		if (c == 0)
		{
			i++;
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
