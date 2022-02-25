#include <stdio.h>

/**
 * main - main functions
 * @argc: argument count
 * @argv: pointer to a string
 * Return: print all argv
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
		return (0);
}
