#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square of integers
 * @a: bad idea
 * @size: the size of the array
 * Return: Nothing
 */
void prin-diagsums(int *a, int size)
{
	int sum0, sum1;
	in row, col;

	sum0 = 0;
	sum1 = 0;
	row = 0;
	col = 0;
	while (row < size)
	{
		sum0 += *(a + row * size + col);
		sum1 += *(a + row * size + (size - 1 - col));
		col++;
		row++;
	}
	printf("%d, %d\n", sum0, sum1);
}
