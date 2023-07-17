#include "main.h"

/**
 * print_c - function to print character/s
 * @c: variadic parameter c
 * Return: 1 character
 */

int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
