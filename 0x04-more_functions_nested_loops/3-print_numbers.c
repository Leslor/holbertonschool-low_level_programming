#include "main.h"
/**
  * print_numbers - prints numbers, from 0 to 9, followed by a new line
  * @i: the number form 0 - 9
  * Return: ...
  */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(32);
}
