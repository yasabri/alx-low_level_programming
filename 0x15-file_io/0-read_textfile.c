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
	register int _open, _read, _write;
	register char *buffer = malloc(sizeof(char)  * letters);

	if (!(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(filename))
	{
		return (0);
	}
	_open = open(filename, O_RDONLY);
	_read = read(_open, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (_open == -1 || _read == -1 || _write == -1 || !(_write == _read))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(_open);
	return (_write);
}
