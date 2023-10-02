#include "main.h"
/**
 * read_textfile - read a file and prints it to POSIX standard output.
 * @filename: file
 * @letters: number of read chars
 * Return: actual number it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	ssize_t r;
	char *c;

	if (file == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	r = read(file, c, letters);
	if (write(STDOUT_FILENO, c, letters) == -1)
	{
		close(file);
		return (0);
	}
	close(file);
	return (r);
}
