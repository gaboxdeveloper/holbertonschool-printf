#include "main.h"
/**
 *print_d - Function that print decimal
 *@d: A interger
 *Return: Count of character printed
 */
int print_d(va_list d)
{
	int num = va_arg(d, int);
	int length = snprintf(NULL, 0, "%d", num) + 1;
	int i, counter = 0;
	char *str = malloc(length * sizeof(char));

	if (str == NULL)
		return (-1);

	sprintf(str, "%d", num);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		counter++;
	}
	free(str);
	return (counter);
}
