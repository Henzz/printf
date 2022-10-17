#include "main.h"

/**
 * print_char - writes the character a to stdout
 * @a: parameter passed to be printed
 * Description: prints characters
 *
 * Return: Always 0.
 */
int print_char(char ch)
{
	return (write(1, &ch, 1));
}
