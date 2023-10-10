#include "main.h"
#include <stdio>

/**
 * _strcmp - compares two strings
 * @s1: string to compare against
 * @s2: string to compare
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
