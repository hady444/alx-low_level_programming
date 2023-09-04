#include "main.h"
/**
 * read_textfile - read file and prints it to the POSIX standard output.
 * @filename: file name.
 * @letters: is the number of letters it should read and print.
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t let, file, w;
	char *text;

	text = malloc(letters);
	if (!text)
		return (0);
	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
                return (0);
	}
	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);
	close(file);
	return (w);

}
