#include "main.h"
/**
  * print_number - function that prints a number
  * @n: number to printed
  * Return: ...
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		n = (-1) * n;
	}
	/*Recursividad*/
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
