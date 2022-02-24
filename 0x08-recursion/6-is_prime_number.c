#include "main.h"
/**
  * test1 - di the recursion until to find the square of a number
  * @n : number to be rooted
  * @iterator : square root of n
  * Return: return a number
  */
int test1(int iterator, int n)
{
	if (n != iterator && n % iterator == 0)
	{
		return (0);
	}
	if (iterator == n - 1)
		return (1);
	if (n > iterator)
		return (test1(iterator + 1, n));
	return (1);
}

/**
  * is_prime_number - function that returns the natural sqare of an integer
  * @n : number to be rooted
  * Return: return a number depends of test function
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (test1(2, n));
}
