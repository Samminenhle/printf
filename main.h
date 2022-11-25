#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/**
 * struct print - structure for printing different types
 * @t: type of character
 * @f: function to print
 *
 * Return: the number of characters printed
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
