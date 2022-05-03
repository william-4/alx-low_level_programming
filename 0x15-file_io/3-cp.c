#include "main.h"
/**
  * main - copy one file to another.
  * @argc: argument count.
  * @argv: argument vector.
  *
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int old, new, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	old =  open(argv[1], O_RDONLY, 0);
	if (old == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	new = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (new == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(old, buf, 1024)) > 0)
	{
		if (write(new, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(old) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", old), exit(100);
	}
	if (close(new) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", new), exit(100);
	}
	return (0);
}
