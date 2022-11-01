#include "main.h"

/**
 * map_func - maps format specifiers to functions
 * @ap: va_list that contains args
 * @c: char (format i + 1)
 * Return: 2 (number of characters printed)
 */
int map_func(va_list ap, char c)
{
	int j;
	format_t f[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int}
	};
	for (j = 0; j < 4; j++)
		if (*f[j].let == c)
			return (f[j].func(ap));
	_putchar('%');
	_putchar(c);
	return (2);
}
