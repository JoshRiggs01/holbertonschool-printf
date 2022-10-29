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
