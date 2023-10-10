#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 */
int _strlen(charr *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
