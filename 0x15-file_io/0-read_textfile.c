#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard ouput
 * @filename:name of input file
 * @letters: number of letters it should read and print
 *
 * Returns: actual number of letters it could read and print / 0 if the file
 * cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);

	return (w);
}
