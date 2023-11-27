#include "main.h"
/**
 * main - content of a file to another one
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 maenthat success
 */

int main(int argc, char *argv[])
{
	int firstfile, secondfile, read, x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	firstfile = open(argv[1], O_RDONLY);
	if (firstfile < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	secondfile = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read = read(firstfile, buffer, 1024)) > 0)
	{
		if (secondfile < 0 || (write(secondfile, buffer, read) != read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(firstfile);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", firstfile), exit(100);
	}
	c2 = close(secondfile);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", secondfile), exit(100);
	}
	return (0);
}
