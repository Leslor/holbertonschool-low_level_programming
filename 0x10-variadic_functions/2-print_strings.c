#include "variadic_functions.h"
/**
  * print_strings - function that prints string, followed by a new line
  * @separator: separator.
  * @n: number of string passed to the function.
  * Return: Return nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;
	char *str;

	if (separator != NULL && n > 0)
	{	va_start(ptr, n);
		for (; i < n; i++)
		{
			str = va_arg(ptr, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
