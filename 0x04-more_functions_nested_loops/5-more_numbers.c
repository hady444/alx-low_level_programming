#include "main.h"
/**
 * more_numbers -lkdmfg
 *
 * Return: 14 numbers 10 times
*/

void more_numbers(void)
{
	int i;
	char j = '0';
	bool flag = true;

	for (i = 0 ; i < 10 ; i++)
	{
		while (true)
		{
			if (flag == false)
				_putchar(1);
			if (j <= '9')
			{
				_putchar(j);
				j++
				if ((flag == false) && (j == '5'))
					break;
			}
			if (j > '9')
			{
				flag = false;
				j = 0
			}

		}
		_putchar('\n');
		j = 0
	}
}
