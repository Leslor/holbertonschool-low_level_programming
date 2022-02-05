#include <stdio.h>

/**
  * main - function that print the alphabet backwards
  * Return: 0
  */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
