#include "main.h"

/**
* print_chessboard - function
* @a: pointer to pieces
* Description: that prints the chessboard.
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int p, p2;

	for (p = 0; p < 8; p++)
	{
		for (p2 = 0; p2 < 8; p2++)
		{
			_putchar(a[p][p2]);
		}
		_putchar('\n');
	}
}
