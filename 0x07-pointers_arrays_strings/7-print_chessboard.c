#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @chessboard: The chessboard to be printed.
 *
 * Return: void.
 */
void print_chessboard(char (*chessboard)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(chessboard[row][col]);
		}
		_putchar('\n');
	}
}

