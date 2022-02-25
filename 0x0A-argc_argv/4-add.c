#include <stdio.h>
#include <stdlib.h>
/**
 * main: main functions
 * @argc: argument count
 * @argv: pointer to a string
 * Return: print all argv
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc == 1 )
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++ )
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
			result += atoi(argv[i]);
	}
			printf("%d\n", result);
 return (0);
}
