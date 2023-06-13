#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @n: he int to be operaed on.
 * Return: returns an unsigned int value to calling function
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
