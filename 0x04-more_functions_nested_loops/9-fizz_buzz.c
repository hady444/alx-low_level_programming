#include "main.h"
/**
 * fizz_buzz - fdsg
 * Return:void
 *
 */
void fizz_buzz(void)
{
	int i;

	printf("1");
	for (i = 2 ; i <= 100 ; i++)
	{
		if (((i % 3 == 0)) && ((i % 5) == 0))
			printf(" FizzBuzz");
		else if ((i % 3) == 0)
			printf(" Fizz");
		else if ((i % 5) == 0)
			printf(" Buzz");
		else
		       printf(" %d", i);	
	}
}
