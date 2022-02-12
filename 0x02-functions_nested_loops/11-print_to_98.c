#include "main.h"
#include <stdio.h>

/**
  * print_to_98- prints a number until 98
  * @n: parameter that count until will be in the 98
  * Return: ...
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 97)
		{
		printf("%d, ", n);
		n++;
		}
	}
	else
	{
		while (n >= 99)
		{

		printf("%d, ",  n);
		n--;
		}
	}
	printf("98\n");
}
