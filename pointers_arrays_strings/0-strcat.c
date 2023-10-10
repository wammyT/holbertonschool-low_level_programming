#include "main.h"
#include <stdio>

/**
 * _strcat - will concatenate two strings
 * @dest: string that will be modified.
 * @src: string that will be concatenated to @dest.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
