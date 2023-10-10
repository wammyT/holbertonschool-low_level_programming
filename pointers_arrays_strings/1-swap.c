#include "main.h"

/**
 * swap_int - swaps the value of the two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
