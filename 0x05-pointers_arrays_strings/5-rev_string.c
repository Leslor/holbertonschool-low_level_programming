#include "main.h"
/**
  * rev_string -  function that returns the length of a string
  * @s: ..
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0, lenght = 0;
	char temp;

	while (s[lenght])
	{
		lenght += 1;
	}
	while (i < lenght / 2)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
		i++;
	}
}
