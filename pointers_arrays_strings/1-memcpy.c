#include  "main.h"

/**
 * _memcpy - function that copies n bytes from  a source to a destination
 * @dest: destination that the copies of the bytes go to.
 * @src: source of the bytes to copy.
 * @n: number of bytes copied over
 *
 * Return: a pointer to the dest.
 */
char *_memcpy(cha *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
