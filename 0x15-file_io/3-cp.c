#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * copy_file - function that creates a file.
  * @p1: file 1...
  * @p2: file 2 ...
  * Return: Nothing
  */

void copy_file(char *p1, char *p2)
{
	int fd, wr, sz, fd2, cl1, cl2;
	char *buf = malloc(1024);

	if (buf == NULL)
		return;
	fd = open(p1, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", p1);
		exit(98);
	}
	sz = read(fd, buf, 1024);
	if (sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", p2);
		exit(98);
	}
	fd2 = open(p2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(fd2, buf, sz);
	if (fd2 == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", p2);
		exit(99);
	}
	cl1 = close(fd);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
}

/**
  * main - function that creates a file.
  * @argc: number of arguments
  * @argv: argv arguments
  * Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
