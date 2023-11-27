#include "main.h"

/**
 * file 0-read_textfile.c
 * read_textfile - reads a text file and prints the letters
 * @letters: the quantity of the printed letters
 * @filename: filename
 * Return: returns numbers of letters printed or  0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd;
	ssize_t nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
