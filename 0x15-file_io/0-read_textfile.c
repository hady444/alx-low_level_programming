#include "main.h"
/**
 * read_textfile - read a file and prints it to POSIX standard output.
 * @filename: file
 * @letters: number of read chars
 * Return: actual number it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file = open(filename, O_RDONLY);
	ssize_t r, w;
	char *c;
	
	if (file == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	if (!c)
                return (0);
	r = read(file, c, letters);
	w = write(STDOUT_FILENO, c, r);
	if (w == -1)
	{
		close(file);
		return (0);
	}
	close(file);
	return (w);
}
