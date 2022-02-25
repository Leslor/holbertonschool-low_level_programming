#include <stdio.h>
#include <stdlib.h>
/**
 * main - main functions
 * @argc: argument count
 * @argv: pointer to a string
 * Return: print all argv
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
		printf("Error\n");
	return (0);
}
