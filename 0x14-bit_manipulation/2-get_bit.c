#include "main.h"

/**
* get_bit - a function that returns value of a bit at a given index
* @n: bit to check
* @index: where to check bit
* Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, result;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
result = n & div;
if (result == div)
return (1);
return (0);
}
