#include "main.h"

/**
  * jack_bauer - that prints every minute of the day of
  * Jack Bauer, starting from 00:00 to 23:59.
  * Return: ...
  */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	for (h1 = 0; h1 <= 2 ; h1++)
	{
		for (h2 = 0; h2 <= 3 ; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + 48);
					_putchar(':');
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar('\n');
				}
			}
		}
	}
}