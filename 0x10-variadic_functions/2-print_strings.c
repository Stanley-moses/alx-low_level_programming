#imclude "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @separator: a string that separates strings
* @n: number of parameters
* @...: other parameters
* Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int a = 0;
va_list ap;
va_start(ap, n);
for (; a < n; a++)
{
str = va_arg(ap, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator == NULL)
continue;
if (a < n - 1)
printf("%s", separator);
}
printf('\n');
va_end(ap);
}
