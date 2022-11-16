#include "function_pointers.h"

/**
* array_iterator - a function that iterates an array
* @array: array to iterate
* @size: size of the array
* @action: pointer to function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;
if (array && action)
{
a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
}
