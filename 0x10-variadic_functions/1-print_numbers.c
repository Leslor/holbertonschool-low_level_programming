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


	if (n <= 0)
		return;
	va_start(ptr, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n  - 1  && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
