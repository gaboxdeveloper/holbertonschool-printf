#include "main.h"
/**
 *print_d - Function that print decimal
 *@d: A interger
 *Return: Count of character printed
 */
int print_d(va_list d)
{
	int a[10];
	int j = 1, m = 1000000000, sum = 0, counter = 0, n;

	n = va_arg(d, int);
	if (n < 0)
	{
		n *= -1;
		_putchar ('-');
		counter++;
	}
	a[0] = n / m;

	for (; n < 10; n++)
	{
		m = m / 10;
		a[j] = (n / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
