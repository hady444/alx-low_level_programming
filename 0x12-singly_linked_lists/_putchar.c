#include "lists.h"
/**
 * _putchar - pass char to stdout
 * @c: passed char
 * Return: success or fail
 */
int _putchar(int c)
{
        static int i;
        static char buf[OUTPUT_BUF_SIZE];

        if (c == BUFFER_CLEAR || i >= OUTPUT_BUF_SIZE)
        {
                write(1, &buf, i);
                i = 0;
        }
        if (c != BUFFER_CLEAR)
                buf[i++] = c;
        return (1);
}
