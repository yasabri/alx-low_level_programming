#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: counts arguments
 * @argv: argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
