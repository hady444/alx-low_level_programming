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
	char *content;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(fd1, "Error: Can't read from file %s", argv[1]);
		return (98);
	}
	content = malloc(sizeof(char) * 1024);
	r = read(fd1, content, 1024);
	if (close(fd1) == -1)
	{
		dprintf(fd1, "Error: Can't close fd %d", fd1);
		return (100);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0664);
	if (fd2 == -1)
	{
		dprintf(fd2, "Error: Can't write to %s", argv[2]);
		return (99);
	}
	w = write(fd2, content, r);
	if (w == -1)
	{
		dprintf(fd2, "Error: Can't write to %s", argv[2]);
		return (99);
	}
	if (close(fd2) == -1)
	{
		dprintf(fd2, "Error: Can't close fd %d", fd2);
		return (100);
	}
	return (0);
}
