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
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}