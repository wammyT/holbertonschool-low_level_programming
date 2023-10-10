#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: haystack
 * @accept: needle
 *
 * Return: points o bytes that match one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		z = 0;
		while(accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return ((s + i));
			z++;
		}
		i++;
	}
	return (NULL);
