#include "main.h"
/**
 * print_alphabet - print all alphabets
 * Description: all lowercase
 *
 * Return: void no value returned
*/

void print_alphabet_x10(void)
{
	char i = 'a';
	int l;

	for (l=0; l < 10; l++)
	{ 
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
}
