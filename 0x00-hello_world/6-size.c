#include <stdio.h>
/**
 * main - print size of some types
 * Return: 0 (Success)
 */
int main(void)
{
	char *arr[] = {"char", "int", "long int", "long long int", "float"};
	int i;
	for (i=0;i<5;i++){
		printf("Size of a %s: %d byte(s)\n", arr[i],(unsigned long) sizeof(arr[i]);
		/*printf("Size of an int: %d byte(s)\n", (unsigned long) sizeof(int));
		printf("Size of a long int: %d byte(s)\n", (unsigned long) sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", (unsigned long) sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", (unsigned long) sizeof(float));
		*/
	}
	return (0);
}
