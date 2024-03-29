#include "main.h"

/**
 * print_chessboard - prints a chessboard, and pieces from a matrix.
 * @a: matrix of the board and pieces location
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, b;

	for (i = 0 ; i < 8 ; i++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(*((*a + i * 8) + b));
		}
		_putchar('\n');
	}
}
