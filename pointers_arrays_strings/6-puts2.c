#include "main.h"

/**
 * puts2 - function should only print 1 out of 2 characters
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
