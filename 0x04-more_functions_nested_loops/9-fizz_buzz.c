#include <stdio.h>
#include "main.h"
/**
  * main -program that prints the numbers
  * from 1 to 100, followed by a new line.
  * Return: 0
  */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3  == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
