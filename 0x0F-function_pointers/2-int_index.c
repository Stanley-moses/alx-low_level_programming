#include "function_pointers.h"

/**
* int_index - a function that indexes an integer
* @array: array for indexing
* @size: size of array
* @cmp: pointer
* Return: index of first element, otherwise -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (a < size)
{
if (cmp(array[a]))
return (a);
a++;
}
}
}
return (-1);
}
