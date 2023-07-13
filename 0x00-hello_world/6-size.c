#include <stdio.h>
/**
 * main - print size of some types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", (unsigned long) sizeof(char));
	printf("Size of an int: %d byte(s)", (unsigned long) sizeof(int));
	printf("Size of a long int: %d byte(s)", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %d byte(s)", (unsigned long) sizeof(long long int));
	printf("Size of a float: %d byte(s)", (unsigned long) sizeof(float));
}
