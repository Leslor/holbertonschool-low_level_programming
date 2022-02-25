#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main functions
 * @argc: argument count
 * @argv: pointer to a string
 * Return: print all argv
 */

int main(int argc, char *argv[])
{
	int i;
  unsigned int k, sum = 0;
	char *j;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j  = argv[i];
			for (k = 0; k < strlen(j); k++)
			{
				if (j[k] < 48 || j[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(j);
			j++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
