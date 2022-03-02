#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - main functions
  * @s1: pointer char
  * @s2: pointer type char
  * Return: return the *s to the concatenate array
  */

char *str_concat(char *s1, char *s2)
{
	int sizes1 = 0, sizes2 = 0, iter2, iter1, sizes1s2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[sizes1])
		sizes1++;
	while (s2[sizes2])
		sizes2++;
	sizes1s2 = sizes1 + sizes2;
	s = malloc((sizeof(char) * sizes1s2) + 1);
	if (s == NULL)
		return (NULL);
	for (iter1 = 0; iter1 < sizes1; iter1++)
		s[iter1] = s1[iter1];
	for (iter2 = 0; iter1 <= sizes1s2; iter1++)
	{
		s[iter1] = s2[iter2];
		iter2++;
	}
	s[sizes1s2 + 1] = '\0';
	return (s);
}
