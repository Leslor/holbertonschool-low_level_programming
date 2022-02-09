#include "main.h"

/**
  * _islower - print the alphabet
  * @n: value for conditional
  * Return: 0 , 1 or -1 depend of the returs
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}
