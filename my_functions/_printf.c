#include "main.h"

/**
 * _printf - formatted output conversion and print data
 * @format: input string
 *
 * Return: numbers of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	print_all(format, args);
	va_end(args);
	return (0);
}
