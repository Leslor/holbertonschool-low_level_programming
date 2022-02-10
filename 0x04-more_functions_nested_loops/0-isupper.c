#include "main.h"

/**
  * _isupper - hecks for uppercase character
  * @c: ascci code to be validated
  * Return: 1 if c is uppercase, otherwise 0
  */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}


