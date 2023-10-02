#include "main.h"
/**
 * read_textfile - read a file and prints it to POSIX standard output.
 * @filename: file
 * @letters: number of read chars
 * Return: actual number it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	ssize_t i;
	char c;

	if (file == NULL)
	{
		return (0);
	}
	for (i = 0; letters > 0; i++, letters--)
	{
		c = getc(file);
		if (c == EOF)
			break;
		printf("%c", c);
	}
	fclose(file);
	return (i);
}
