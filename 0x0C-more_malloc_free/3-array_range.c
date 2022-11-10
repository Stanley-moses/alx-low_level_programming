#include "main.h"

/**
* array_range - a function that prints an array of integers
* @min: starting point
* @max: ending point
* Return: pointer
*/

int *array_range(int min, int max)
{
int *new_array;
int diff, a;
if (min > max)
return (NULL);
diff = max - min;
new_array = malloc((diff + 1) * sizeof(int));
if (new_array == NULL)
return (NULL);
for (a = 0; a <= diff; a++)
new_array[a] = min++;
return (new_array);
}
