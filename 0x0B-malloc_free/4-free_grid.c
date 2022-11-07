#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - a function that frees a 2-D grid
* @grid: the grid
* @height: height of the grid
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}
