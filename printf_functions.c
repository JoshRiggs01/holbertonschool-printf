#include <stdarg.h>
#include <stdio.h>
#include "main.h"

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
 *Return: # of chars rinted
 */
int print_c(va_list c)
{
	unsigned int x = 0;

	if (!c)
	{
		return (0);
	}
	_putchar((char)va_arg(c, int));
	x++;

	return (x);
}
/**
  * print_s - prints strings
  * @s: string to print
  * Return: number of characters printed
  */
int print_s(va_list s)

{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
/**
 * print_id - print int/d to std out
 * @id: int/d to print
 * Return: length
 */

int print_id(va_list id)
{
	int count = 0, x = 0;
	int v = va_arg(id, int), divide = 1;
	char intm[11] = {"-2147483648"};

	if (v == INT_MIN)
	{
		for (x = 0; x <= 10; x++)
		{
			_putchar(intm[x]);
			count++;
		}
		return (count);
	}
	if (v < 0)
	{
		_putchar('-');
		v = -v;
		count++;
	}

	while ((v / divide) >= 10)
	{
		divide *= 10;
	}

	while (divide >= 1)
	{
		_putchar((v / divide + '0'));
		v = v % divide;
		divide /= 10;
		count++;
	}
	return (count);
}
