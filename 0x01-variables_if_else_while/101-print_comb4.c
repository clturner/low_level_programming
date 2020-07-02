#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;
	int count = 0;
	int comma = 44;
	int space = 32;

	for (first = 48; first <= 55; first++)
	{
		for (second = (49 + count); second <= 56; second++)
		{
			for (third = (second + 1); third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == 55 && second == 56 && third == 57)
				{
					putchar('\n');
					return (0);
				}
				putchar(comma);
				putchar(space);
			}
		}
		count++;
	}
	return (0);
}
