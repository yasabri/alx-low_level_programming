#include "main.h"
/**
 * main - transor copy content of a file to another one
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fileone, filetwo, _read, x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fileone = open(argv[1], O_RDONLY);
	if (fileone < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filetwo = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_read = read(fileone, buffer, 1024)) > 0)
	{
		if (filetwo < 0 || (write(filetwo, buffer, _read) != _read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(fileone);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fileone), exit(100);
	}
	y = close(filetwo);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", filetwo), exit(100);
	}
	return (0);
}
