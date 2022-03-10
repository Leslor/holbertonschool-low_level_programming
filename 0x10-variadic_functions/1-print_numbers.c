#include "variadic_functions.h"
/**
  * print_numbers - function that prints numbers, followed by a new line
  * @separator: separator.
  * @n: number of integers passed to the function.
  * Return: Return the Sum or 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;


	if (separator == NULL || n <= 0)
		return;
	va_start(ptr, n);
	for (; i < n - 1; i++)
	{
		printf("%d", va_arg(ptr, int));
		printf("%s", separator);
	}
	printf("%d", va_arg(ptr, int));
	va_end(ptr);
	printf("\n");
}
