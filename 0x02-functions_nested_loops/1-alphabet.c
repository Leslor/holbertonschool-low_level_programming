#include "main.h"

/**
  * print_alphabet - print the alphabet
  * Return: 0
  */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
