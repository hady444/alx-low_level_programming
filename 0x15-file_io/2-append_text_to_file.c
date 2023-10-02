#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append to file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL || f == -1)
	{
		close(f);
		return (-1);
	}
	if (!text_content)
		text_content = "";
	write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}
