#include <stdio.h>
#include "CODESCHOOL.h"
/**
 * _strlen - counts the length of a given string
 * @s: pointer to a string , characters in string are counted
 * Description: counts the length of string pointed to by *s
 *
 * Return: count of charachters in a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
