#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_diagsums - a function that prints the sum of diagonals
* @a: pointer to start of matrix
* @size: width of matrix column
* Return: void
*/

void print_diagsums(int *a, int size)
{
int e, f, g, h = 0, i = 0;
for (e = 0; e < size; e++)
{
g = (e * size) + e;
h += *(a + g);
}
for (f = 0; f < size; f++)
{
g = (f * size) + (size - 1 - f);
i += *(a + g);
}
printf("%e, %e\n", h, i);
}
