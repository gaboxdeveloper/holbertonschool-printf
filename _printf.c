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

	while (format && format[x])
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
				counter++;
				x++;
				continue;
		}
		else if (format[x + 1] == '%')
		{
			_putchar('%');
		counter++;
		x++;
		continue;
		}
		else
		{
			f = format_aux(&format[x + 1]);
				if (NULL)
				{
					return (-1);
					x += 2;
					counter += f(ap);
					continue;
				}
		}
		x++;
		va_end(ap);
	}
	return (counter);
}
