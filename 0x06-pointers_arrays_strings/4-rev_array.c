#include "main.h"
/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: int apuntador
  * @n: contador
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = a[i];

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
