#include "main.h"
/**
  * print_diagonal - function that draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  * Return: ...
  */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	_putchar(10);
	}
}
