#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - a function that returns pointed to a 2-D array
* @width: width of array
* @height: hieght of array
* Return: a pointer to a 2-D array of integers
*/

int **alloc_grid(int width, int height)
{
int **array, a, b;
int len = width * height;
if (len <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
array[a] = (int *)malloc(sizeof(int) * width);
if (array[a] == NULL)
{
for (a--; a >= 0; a--)
free(array[a]);
free(array);
return (NULL);
}
}
for (a = 0; a < height; a++)
for (b = 0; b < width; b++)
array[a][b] = 0;
return (array);
}
