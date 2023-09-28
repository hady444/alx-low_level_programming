/**
 * get_endianness - knoe of OS
 *
 * Return: 0 big , 1 little
 */
int get_endianness(void)
{
	unsigned int m = 1;

	return (*(char *)(&m) == 1);
}
