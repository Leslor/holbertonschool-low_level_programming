#include "main.h"

/**
  * print_last_digit - function that computes the absolute value of an integer
  * @c: value for conditional
  * Return: 0 or 1
  */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	if (last_digit <  0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit);
	
	return (last_digit);
}
