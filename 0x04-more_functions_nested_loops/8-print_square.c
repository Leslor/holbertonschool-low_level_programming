#include "main.h"
/**
  * print_square - function that prints a square, followed by a new line.
  * @size: the size of the square
  * Return: ...
  */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
