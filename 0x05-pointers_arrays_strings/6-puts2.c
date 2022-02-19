#include "main.h"
/**
  * puts2 - function that prints every other character of a string.
  * @str: puntero de tipo char
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
