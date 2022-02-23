#include "main.h"
#include <stdio.h>
/**
  * _strstr - function that locates a substring.
  * @haystack: the initial string
  * @needle: sub string
  * Return: Returns a pointer to the beginning of the located substring..
  */
char *_strstr(char *haystack, char *needle)
{
	int counter = 0, i = 0, j = 0;
	char *match;

	while (needle[i])
	{
		while (haystack[j])
		{
			match = 0;
			if (needle[i] == haystack[j])
			{
				counter++;
				match = &haystack[i+j];
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
