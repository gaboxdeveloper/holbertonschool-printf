#include "main.h"
/**
 *print_d - Function that print decimal
 *@i: A interger
 *Return: Count of character printed
 */
int print_d(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, sum = 0, counter = 0, n;

	n = va_arg(i_int);
	if (n < 0)
	{
		n *= -1;
		_putchar ('-');
		counter++;
	}
	a[o] = n / m;

	for (; i < 10; j++)
	{
		m / 10;
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