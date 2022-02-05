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
	int k = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8')
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
