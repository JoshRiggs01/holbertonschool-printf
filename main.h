#ifndef main_h
#define main_h

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/*functions*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list ap);

#endif
