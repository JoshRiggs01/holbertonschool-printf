#include "main.h"

/**
 * check - - maps format to pointer
 * @format: format specifier
 *
 * Return: pointer
 */
int (*check(const char *format))(va_list)
{
	unsigned int j;
	format_t f[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	for (j = 0; f[j].type != NULL; j++)
	{
		if (*(f[j].type) == *form)
			break;
	}
	return (f[j].f);
}
/**
 * _printf - prints anything
 * @format: format specifier
 *
 * Return: count of char
 */
int _printf(const char *format, ...)
{
	unsigned int x, count = 0;
	va_list a;
	int (*c)(va_list);

	if (format == NULL)
		return (-1);
	x = 0;
	while (format[x])
	{
		for (i = 1; format[x] != '%' && format[x]; x++)
		{
			_putchar(format[x]);
			count++;
		}
		if (!format[x])
			return (count);
		c = check(&format[x + 1]);
		if (c != NULL)
		{
			count += c(a);
			x += 2;
			continue;
		}
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(a);
	return (count);
}
