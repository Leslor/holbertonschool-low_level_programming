#include <stdio.h>

/**
  * main - function that print the alphabet
  * Return: 0
  */
int main(void)
{
	char i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}

	putchar(10);
	return (1);
}

