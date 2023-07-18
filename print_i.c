#include "main.h"
/**
 *print_i - Function that print decimal
 *@i: A interger
 *Return: Count of character printed
 */
int print_i(va_list i)
{
	int num = va_arg(i, int);
	int length = snprintf(NULL, 0, "%i", num) + 1;
	int c, counter = 0;
	char *str = malloc(length * sizeof(char));

	if (str == NULL)
		return (-1);

	sprintf(str, "%i", num);

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
		counter++;
	}
	free(str);
	return (counter);
}
