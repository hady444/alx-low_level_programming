#include "main.h"
/**
 * main - main
 * @argc: number of arguments
 * @argv: char pointer to arguments
 * Return: 0 or 97 or 98 or 99 or 100
 */
int main(int argc, char **argv)
{
	int r, w, fd1, fd2;
	char content[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	r = read(fd1, content, 1024);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	w = write(fd2, content, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
