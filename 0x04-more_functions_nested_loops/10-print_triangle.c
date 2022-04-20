#include "main.h"
/**
  * print_triangle - function that draws a triangle # on the terminal
  * @size: number of times the character # should be printed
  * Return: ...
  */

void print_triangle(int size)
{
	int a, b, j;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
				_putchar(32);
			for (j = 1; j <= a; j++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
