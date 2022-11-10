#include "main.h"

/**
* _realloc - a function that reallocates memory
* @ptr: pointer to previous memory
* @old_size: old size of previous memory
* @new_size: new size of memory
* Return: pointer to new memory location
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_loc, *new_ptr;
unsigned int a = 0;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
new_loc = malloc(new_size);
new_ptr = ptr;
if (old_size > new_size)
old_size = new_size;
for (a = 0; a < old_size; a++)
new_loc[a] = new_ptr[a];
free(ptr);
return (new_loc);
}
