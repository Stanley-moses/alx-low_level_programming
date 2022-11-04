#include <unistd.h>

/**
* _putchar - a function that writes character to standard output
* @c: input character
* Return: 1 if successful, otherwise 0
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
