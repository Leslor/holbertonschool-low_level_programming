#include <stdio.h>

/**
  * main - program that prints all possible
  * different combinations of two digits
  * Return: 0
  */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || (i != 8 && j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
