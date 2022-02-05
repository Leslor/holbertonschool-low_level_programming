#include <stdio.h>

/**
  * main - function that print the alphabet backwards
  * Return: 0
  */
int main(void)
{
	char i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
