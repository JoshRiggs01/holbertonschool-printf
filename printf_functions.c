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
 *spec_c - prints char to stdout
 *@c: char to print
 *Return: # of chars printed
 */
int spec_c(va_list c)
{
	unsigned int count = 0;

	if (!c)
	{
		return (0);
	}
	_putchar((char)va_arg(c, int));
	count++;

	return (count);
}
