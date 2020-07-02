#include "CODESCHOOL.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * realloc - reallocates space pointed to by ptr
 * @ptr: pointer previously allocated space
 * @old_size: the address of memory to print
 * @new_size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *help;
	unsigned int i = 0;
	unsigned int size = 0;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	help = ptr;
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size > old_size)
		size = old_size;
	else
		size = new_size;
	while (i < size)
	{
		new[i] = help[i];
		i++;
	}
	free(ptr);
	return (new);
}
