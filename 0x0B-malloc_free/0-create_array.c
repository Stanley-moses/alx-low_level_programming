#include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates an array of characters
* @size: size of the array
* @c: start up point
* Return: a pointer to the array, otherwise NULL
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int a;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (a = 0; a < size; a++)
array[a] = c;
return (array);
}
