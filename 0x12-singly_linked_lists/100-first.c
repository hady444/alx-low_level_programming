#include "lists.h"
/**
 * before_main - to be executed before main function
 */
__attribute__((constructor))
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n\
I bore my house upon my back!\n");
}
