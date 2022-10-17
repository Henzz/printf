#include "main.h"

/**
 * print_all - prints given list of args according to their type
 * @fmt: first argument
 * @args: next list of argument
 *
 * Return: nothing.
 */
void print_all(const char *format, va_list args)
{
	int percent_state = 0;

	while (*format)
	{
		if (percent_state == 0)
		{
			if (*format == '%')
				percent_state = 1;
			else
				print_char(*format);
		}
		else if (percent_state == 1)
		{
			if (*format == 'c')
				print_char(va_arg(args, int));
			if (*format == 's')
			{
				const char *s = va_arg(args, const char *);
				while (*s)
					print_char(*s++);
			}
			if (*format == 'd')
				print_char(va_arg(args, int));
			percent_state = 0;
		}
		format++;
	}
}
