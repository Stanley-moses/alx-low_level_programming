#imclude "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @separator: a string that separates strings
* @n: number of parameters
* Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int a;
va_list ap;
va_start(ap, n);
if (separator == NULL)
separator = "";
for (a = 0; a < n; a++)
{
str = va_arg(ap, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (a < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
