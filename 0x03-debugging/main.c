#include "main.h"
/**
 * main - prints whether a random integer is positive, negative, or zero
 *
 * Description: This function generates a random integer between
 * -RAND_MAX/2 and RAND_MAX/2
 * and prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}
