#include "main.h"
/**
 * format_aux - function
 * @format: string provided
 * Return: pointer to char
 */
int (*format_aux(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		break;
	}
	return (p[i].f);
}
