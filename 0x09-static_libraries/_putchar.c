#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char to stdout
 * @c: The character to print
 *
 * Return: On success 1, -1 is returned, and errno is set appropr
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
