#include "CODESCHOOL.h"

/*
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int j;
	int count;

	int loop;
	int temp;

	count = -1;
	for (j = 0; s[j] != '\0'; j++)
	{
		count += 1;
	}
	for (loop = 0; loop <= count / 2; loop++)
	{
		temp = s[loop];
		s[loop] = s[count - loop];
		s[count - loop] = temp;
	}

}
