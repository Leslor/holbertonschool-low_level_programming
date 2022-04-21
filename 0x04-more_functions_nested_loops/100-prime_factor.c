#include <stdio.h>
/**
  * main - program that finds and prints the
  * largest prime factor of the number 612852475143
  * Return: ...
  */

int main(void)
{
	long int num = 0;
	int a = 3;
	long int maxprime = 0;

	num  = 612852475143;

	if (num <= 1)
		return (0);
	/*Number divided of 2s*/
	while (num % 2 == 0)
	{
		maxprime = 2;
		num /= 2;
	}
	/*n must be odd at this point. So we can skip the even numbers*/
	while (num != 1)
	{
		while (num % a == 0)
		{
			maxprime = a;
			num /= a;
		}
		a += 2;
	}
	printf("%ld\n", maxprime);
	return (0);
}
