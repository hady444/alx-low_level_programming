#include "function_pointers.h"
/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
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
