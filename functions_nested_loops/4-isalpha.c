#include "main.h"

/**
 * Write a function that checks for alphabetic characters.
 *
 * Return: 1 if c is a letter, lowercase, or uppercase.
 * Return: 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return(1);
	else
		return (0);
}
