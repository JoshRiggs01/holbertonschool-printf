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
	print_format x[] = {
		{"c", print_c},
		{"ap", print_s},
		{"d", print_id},
		{"i", print_id},
		{NULL, NULL}
	};
	for (j = 0; x[j].type != NULL; j++)
	{
		if (*(x[j].type) == *format)
		{
			break;
		}
	}
	return (x[j].f);
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
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	x = 0;
	while (format[x])
	{
		for (x = 0; format[x] != '%' && format[x]; x++)
		{
			_putchar(format[x]);
			count++;
		}
		if (!format[x])
			return (count);
		f = check(&format[x + 1]);
		if (f != NULL)
		{
			count += f(ap);
			x += 2;
			continue;
		}
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(ap);
	return (count);
}
