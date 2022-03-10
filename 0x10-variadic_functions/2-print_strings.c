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
		for (; i < n - 1; i++)
		{
			str = va_arg(ptr, char *);
			if (str == NULL)
				printf("(nil)%c", *separator);
			else
				printf("%s%c", str, *separator);
		}
		str = va_arg(ptr, char *);
		printf("%s", str);
		va_end(ptr);
		printf("\n");
	}
}
