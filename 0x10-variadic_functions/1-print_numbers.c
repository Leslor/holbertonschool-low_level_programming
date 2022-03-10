#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers, followed by a new line
  * @separator: separator.
  * @n: number of integers passed to the function.
  * Return: Return the Sum or 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{	
	unsigned int i = 0;
	va_list ptr;

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (; i < n - 1; i++)
	{
		printf( "%d%c",va_arg(ptr, int), *separator);
	}
	printf( "%d\n",va_arg(ptr, int));
	va_end(ptr);
}
