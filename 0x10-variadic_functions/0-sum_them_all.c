#include "variadic_functions.h"

/**
  * sum_them_all -  function that prints a struct dog
  * @n: variable name.
  * Return: Return the Sum or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
