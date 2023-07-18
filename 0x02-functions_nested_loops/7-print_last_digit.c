#include "main.h"
/**
 * print_last_digit - klsfk
 * Description: kjnf
 * @l: mkfg
 * Return: mkfg
*/
int print_last_digit(int l)
{
	int lastDigit;

	if (l < 0)
		lastDigit = -1 * (l % 10);
	else
		lastDigit = l % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}

