#include "main.h"

/**
  * string_toupper - function that reverses the content of an array of integers
  * @str: contador
  * Return: Return the string reversed
  */
char *string_toupper(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}
