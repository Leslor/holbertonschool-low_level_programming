#include "main.h"
/**
  * factorial- function that returns the factorial of integer
  * @n: integer number
  * Return: return the result of the factorial of a number
  * or -1 if the parameter is 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
