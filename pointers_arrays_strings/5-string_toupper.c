#include "main.h"
#include <stdio.h>

/**
 * string_toupper - make all lowercase letters in a string uppercase.
 * @s: sring to process.
 *
 * Return: a pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';

	return (s);
}
