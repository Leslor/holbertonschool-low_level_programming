#include "main.h"

/**
  * _islower - print the alphabet
  * @c: value for conditional
  * Return: 0 or 1
  */
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);

}
