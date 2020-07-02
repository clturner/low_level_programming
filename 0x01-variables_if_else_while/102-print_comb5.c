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
	int fourth;

	int comma = 44;
	int space = 32;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{

			for (third = first ; third <= 57; third++)
			{
				for (fourth = second + 1; fourth <= 57; fourth++)
				{

					putchar(first);
					putchar(second);
					putchar(space);
					putchar(third);
					putchar(fourth);
					if (first == 57 && second == 56 && third == 57 && fourth == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(comma);
						putchar(space);
					}

				}

			}
		}
	}
	return (0);
}
