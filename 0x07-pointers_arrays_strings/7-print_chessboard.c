#include "main.h"

/**
* print_chessboard - a function that prints a chessboard
* @a: pointer to pieces to print
* Return: void
*/

void print_chessboard(char (*a)[8])
{
int x, y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[z][y]);
}
_putchar('\n');
}
}
