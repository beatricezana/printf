#include "main.h"
/**
 * _c - print characters
 * @arg: int parameters
 * Return: no. of parameters
 */
int _c(va_list arg)
{
int c = va_arg(arg, int);
return (_putchar(c));
}

/**
 * _s - print string
 * @arg: input parameters
 * Return: no. of parameters
 */
int _s(va_list arg)
{
int i, count = 0;
char *str;
str = va_arg(arg, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i]; i++)
{
count += _putchar(str[i]);
}
return (count);
}
