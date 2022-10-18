#include "main.h"

/**
 * print_chr - writes the character c to stdout
 * @args: input type char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 *
 * Return: Always 1(Success).
 */
int print_chr(va_list args, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(args, int);
	handl_buf(buf, c, ibuf);
	return (1);
}
