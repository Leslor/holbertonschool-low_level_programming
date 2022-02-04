#include <stdio.h>

/**
  *The main Function prints the size of
  *the var types 
  *
  * Return  0
  */
int main(void)
{
	char type1;
	int type2;
	long int type3;
	long long int type4;
	float type5;
	
	printf ("Size of a char: %d byte(s)\n", sizeof(type1));
	printf ("Size of an int: %d byte(s)\n", sizeof(type2));
	printf ("Size of a long int: %d byte(s)\n", sizeof(type3));
	printf ("Size of a long long int: %d byte(s)\n", sizeof(type4));
	printf ("Size of a float: %d byte(s)\n", sizeof(type5));
	return (0);
}
