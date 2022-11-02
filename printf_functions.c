#include "main.h"
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
 *print_c - prints char to stdout
 *@c: char to print
 *Return: # of chars printed
 */
int print_c(va_list c)
{
	unsigned int count = 0;

	if (!c)
	{
		return (0);
	}
	_putchar((char)va_arg(c, int));
	count++;

	return (count);
}/**
  * print_s - prints strings
  * @ap: va_list that holds arguments from main function
  * Return: number of characters printed
  */
int print_s(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;

	if (str == NULL)
		str = "(null)";
	else
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	}
	return (i);
}
