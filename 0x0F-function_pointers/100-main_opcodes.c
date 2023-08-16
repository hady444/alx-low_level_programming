#include "function_pointers.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int bytes = atoi(argv[1]), i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
