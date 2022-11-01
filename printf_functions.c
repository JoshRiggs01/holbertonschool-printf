#include <unistd.h>

/**
 * _putchar - writes char c
 * @c: the char to print
 *
 * Return: 1 if success, -1 if error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - function
 * @c: char
 * Return: 1
 */
int print_c(va_list c)
{
	int a = va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
 * print_s - function
 * @s: string
 * Return: number of characters
 */
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *)

		for (count = 0; str[count]; count++)
			_putchar(str[count]);
	return (count);
}
