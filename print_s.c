#include "main.h"

/**
 * print_s - function to print a string
 * @s: variadic parameter s
 * Return: amount of characters of the string
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int x = 0;

	if (str == NULL)
		str = NULL;

	while (str[x])
		_putchar(str[x++]);

	return (x);
}
