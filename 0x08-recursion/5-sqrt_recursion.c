#include "main.h"
/**
  * test - di the recursion until to find the square of a number
  * @n : number to be rooted
  * @iterator : square root of n
  * Return: return a number
  */
int test(int iterator, int n)
{
	if (iterator * iterator == n)
	{
		return (iterator);
	}
	if (iterator * iterator > n)
	{
		return (-1);
	}
	return (test(iterator + 1, n));
}

/**
  * _sqrt_recursion- function that returns the natural sqare of an integer
  * @n : number to be rooted
  * Return: return a number depends of test function
  */

int _sqrt_recursion(int n)
{
	return (test(0, n));
}
