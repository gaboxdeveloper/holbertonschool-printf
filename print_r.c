#include "main.h"
/**
 *print_r - reverse string
 *@r: variadic
 *Return: Amount of character printed
 */
int print_r(va_list r)
{
	int len = 0, counter = 0;
	char *str = va_arg(r, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len] != '\0')
		len++;
	for (len -= 1; len >= 0; len--)
	{
		_putchar(str[len]);
		counter++;
	}
	return (counter);
}
