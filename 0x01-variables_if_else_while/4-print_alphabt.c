#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase,
  * followed by a new line
  * Return: 0
  */
int main(void)
{
	char i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
		putchar(10);
	return (0);
}
