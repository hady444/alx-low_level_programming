#include<stdio.h>
/**
 *main - easy steps
 *
 *Description: numbers
 *
 *Return: 0 Success
*/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	char alpha = 'a';

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
