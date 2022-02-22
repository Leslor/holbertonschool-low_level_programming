#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - function that searches a string for any of a set of bytes.
  * @s: the initial string
  * @accept: string containing the match character
  * Return: Returns a pointer to dest.
  */
char *_strpbrk(char *s, char *accept)
{
	int counter = 0, i = 0, j = 0;
	char *match;

	while (s[i])
	{
		while (accept[j])
		{
			match = 0;
			if (s[i] == accept[j])
			{
				counter++;
				match = &s[i];
				break;
			}
			j++;
		}
		j = 0;
		if (counter > 0)
			break;
		i++;
	}
	if (counter > 0)
		return (match);
	else
		return (NULL);
	return (0);
}
