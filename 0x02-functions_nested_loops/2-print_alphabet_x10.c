#include "main.h"

/**
  * print_alphabet - print the alphabet 10x
  * Return: 0
  */

void printlphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; ++x)
	{
		for (i = 97; i < 123; i++)
			{
				_putchar(i);
			}	
		_putchar('\n');
	}
}
