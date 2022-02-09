#include "main.h"

/**
  *  _abs - function that computes the absolute value of an integer
  * @c: value for conditional
  * Return: 0 or 1
  */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
