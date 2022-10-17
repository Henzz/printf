#include "main.h"

/**
 * print_str - prints the string to stdout
 * @args: input type string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 *
 * Return: Always 0(Success).
 */
int print_str(va_list args, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}
