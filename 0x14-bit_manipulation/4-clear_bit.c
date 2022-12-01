#include "main.h"

/**
* clear_bit - a function that sets value of bit at given index
* @n: number
* @index: index to set bits
* Return: 1 on success, otherwise -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
a = ~(1 << index);
*n = *n & a;
return (1);
}
