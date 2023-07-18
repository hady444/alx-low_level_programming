#include "main.h"
/**
 * print_alphabet - print all alphabets
 * Description: all lowercase
 *
 * Return: void no value returned
*/

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i);
	putchar('\n');
}
