#include "main.h"
#include <stdio.h>

/**
 * _strchr - return a pointer to the first character in a string
 * @s: string to search for the character in
 * @c: character to search for.
 *
 * Return: pointer to character or else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + 1));
	return (NULL);
}
