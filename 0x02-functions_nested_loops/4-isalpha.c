#include "main.h"

/**
  * _isalpha - print the alphabet
  * @c: value for conditional
  * Return: 0 or 1
  */
int _isalpha(int c)
{
	if ((c >= 97 && c < 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
