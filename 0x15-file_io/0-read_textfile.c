#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: path.
 * @letters: Is the number of letters it should read
 * and print.
 *
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, sz, wr;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, sz);
	if (sz == -1 || wr == -1 || wr != sz)
		return (0);

	free(buffer);
	close(fd);
	/*Numbers of letter it could read and print */
	return (sz);
}
