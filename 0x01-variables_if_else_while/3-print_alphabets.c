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

	while (alpha != 'Z' + 1)
	{
		putchar(alpha);
		if (alpha == 'z')
		{
			alpha = 'A';
			continue;
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
