#include "main.h"
#include <stdio.h>
/**
  * print_times_table -  function that prints the n times table
  * @n: parameter that n times will be multiplied
  * Return: the answer of each n times table
  */
int main(void)
{
	int count, multiples = 0;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 ==0 || count % 5 ==0)
			multiples += count;
	}
	printf("%d\n",count);
	return(0);


}
