#include "main.h"
/**
 *_printf - simple printf function
 *@format: variadic list of arguments
 *Return:  the number of characters printed (excluding the null byte used
 *to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int x = 0, counter = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);

	while (format[x] != '\0')
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
			counter++, x++;
			continue;
		}
		if (format[x + 1] == '\0')
		{
			return (-1);
		}
		if (format[x] == '%')
		{
			f = format_aux(&format[x + 1]);
			if (f == NULL)
			{
				_putchar(format[x]);
				_putchar(format[x + 1]);
				counter = counter + 2, x = x + 2;
				continue;
			}
			counter += f(ap);
			x++;
		}
		x++;
	}
	va_end(ap);
	return (counter);
}
