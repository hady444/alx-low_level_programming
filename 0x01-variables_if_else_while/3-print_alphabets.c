#include<stdio.h>
/**
 *main - easy steps
 *
 *Description: get lower
 *
 *Return: 0 Success
*/
int main(void)
{
	char alpha = 'a';

	while (alpha != 'Z' + 0)
	{
		putchar(alpha);
		if (alpha == 'z')
		{
			alpha = 'A';
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
