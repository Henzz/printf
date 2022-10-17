#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: type identifier
 * @f: pointer to a printer functions
 *
 * Description: a struct that stores a type char and a pointers to a printer functions.
 */
typedef struct print_types
{
	char *type;
	int (*function)(va_list arg);
} print_type;

int _printf(const char *format, ...);
void print_all(const char *format, va_list args);
int print_char(char ch);
int print_string(va_list arg, unsigned int);

#endif /* MAIN_H */
