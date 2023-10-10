#include "main.h"

/**
 * write a function that checks for lowercase characters.
 *
 * Return: 1  for lowercase character 0 for anything else.
 */

int _islower(int c)
{
	if (c >= 97  && c  <= 122)
	{
		return (1);
	}
	return (0);
}
