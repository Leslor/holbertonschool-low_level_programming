#include "main.h"
/**
  * print_times_table -  function that prints the n times table
  * @n: parameter that n times will be multiplied
  * Return: the answer of each n times table
  */
void print_times_table(int n)
{
	int r, c, ans;

	if (n < 16 && n > 0)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				if (c == 0)
				{
					_putchar(48);
					continue;
				}
				else
				{
					ans = r * c;
					_putchar(44);
					_putchar(32);
					if (ans <= 9)
					{
						_putchar(32);
						_putchar(32);
						_putchar(ans + '0');
					}
					else if (ans > 9 && ans < 100)
					{
						_putchar(32);
						_putchar((ans / 10) + '0');
						_putchar((ans % 10) + '0');
					}
					else
					{
						_putchar(((ans / 10) / 10) + '0');
						_putchar(((ans / 10) % 10) + '0');
						_putchar((ans % 10) + '0');
					}
				}
			}
			_putchar(10);
		}
	}
}
