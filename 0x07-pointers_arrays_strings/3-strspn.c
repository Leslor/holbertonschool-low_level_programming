#include "main.h"
/**
  * _strspn - function that gets the length of a prefix substring
  * @s: the initial string
  * @accept: string containing the
  * characters to match
  * Return: Returns a pointer to dest.
  */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, i = 0, j = 0, match = 0;

	while (s[i])
	{
		while (accept[j])
		{
			match = 0;
			if (s[i] == accept[j])
			{
				counter++;
				match = 1;
				j = 0;
				break;
			}
			j++;
		}
		i++;
		if (match == 0)
		{
			break;
		}
	}
	return (counter);
}
