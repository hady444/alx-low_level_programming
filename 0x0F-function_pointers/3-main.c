#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int main(int argc,char *argv[])
{
	int n1 = atoi(argv[1]), n2 = atoi(argv[3]), result;
	int (*x)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = x(n1, n2);
	printf("%d\n", result);
	return (0);
}
