#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard
*/

void print_chessboard(char (*a)[8])
{
	int rows, cols;

	for (cols = 0; cols < 8; cols++)
	{
		for (rows = 0; rows < 8; rows++)
		{
			_putchar(a[cols][rows]);
		}
		_putchar('\n');
	}
}
