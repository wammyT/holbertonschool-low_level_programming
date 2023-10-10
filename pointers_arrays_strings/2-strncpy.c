#include "main.h"
#include <stdio>

/**
 * _strncpy - concatenates two strings.
 * @dest: string that will be modified
 * @src: string that will be concatenaed to @dest.
 * @n: how much to copy bewenn src to dest.
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_01 = 0;

	for (i_01 = 0; i_01 < n && src[i_01] != '\0'; i_01++)
		dest[i_01] = src[i_01];
	for ( ; i_01 < n ; i_01++)
		dest[i_01] = '\0';

	return (dest);
}
