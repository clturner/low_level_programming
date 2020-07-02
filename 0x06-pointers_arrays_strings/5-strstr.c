#include "CODESCHOOL.h"
#include <stdlib.h>
/**
 * _strstr - finds first occurrence ofn substring needlestring haystack
 * @haystack: first string to check for pattern
 * @needle: second string to check against haystrack
 * Description: a pointer to the beginning of the located substring, or NULL
 * Return: p1start or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
        int j;
        int match;
        int saved_index;
        int needle_char_size;

        i = 0;
        j = 0;
        match = 0;
        saved_index = 0;
        needle_char_size = 0;

        while (needle[needle_char_size] != '\0')
        {
                needle_char_size++;
	}

        while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j])
			{
				match += 1;
				if (i == 0)
				{
					saved_index = j;
				}
			}
                        j++;
		}
                j = saved_index + 1;
		i++;
	}
        if (match == needle_char_size)
	{
		return &(haystack[saved_index]);
	}
        return ('\0');
}
