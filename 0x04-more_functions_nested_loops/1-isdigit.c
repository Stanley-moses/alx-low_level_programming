#include "main.h"

/**
* _isdigit - Checks for digits (0 through 9)
* @c: An input integer
* Return: 1 if c is digit, otherwise 0
*/

int _isdigit(int c)
{
char i = '0';
int isdigit = 0;

for (; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
break;
}
}

return (isdigit);
}
