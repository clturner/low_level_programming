#include "CODESCHOOL.h"

/**
 * times_table - Learn your times table
 * description: prints the 9 times table, starting with 0.
 * Return: Always 0.
 */
void times_table(void)
{
	int digit = 0, count = 0, count1 = 0;
	char comma = ',';
	char space = ' ';
	char zero = '0';

	for (; count <= 9; count++)
	{
		_putchar(zero);
		_putchar(comma);
		_putchar(space);
		_putchar(space);
		for (; count1 <= 8; count1++)
		{
			digit = digit + count;
			if (count1 != 8)
			{
				if (digit <= 9)
					_putchar((digit % 10) + '0');
				else
				{
					_putchar((digit / 10) + '0');
					_putchar((digit % 10) + '0');
				}
				_putchar(comma);
				if (count * (count1 + 2) >= 10)
					_putchar(space);
				else
				{
					_putchar(space);
					_putchar(space);
				}

			}
			else
			{
				_putchar((digit / 10) + '0');
				_putchar((digit % 10) + '0');
			}
		}
		count1 = 0;
		digit = 0;
		putchar('\n');
	}
}
