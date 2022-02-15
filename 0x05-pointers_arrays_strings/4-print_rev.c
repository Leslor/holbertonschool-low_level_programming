#include "main.h"
/**
  * _strlen -  function that returns the length of a string
  * @s: ..
  * Return: returns the length of a string
  */

void print_rev(char *s)
{
	int i = 0;
	int counter;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (counter = i; counter >= 0; counter--)
	{
	_putchar(*s);
	s--;
	}
	_putchar(10);
}
