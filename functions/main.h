#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: a struct that stores pointers to a printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int ev_print_func(const char *s, int index); /* Struct array of data identifiers and functions*/
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
/* Below are function for the argument specified data type */
int print_chr(va_list args, char *buf, unsigned int ibuf);
int print_str(va_list args, char *buf, unsigned int ibuf);
int print_int(va_list args, char *buf, unsigned int ibuf);
int print_unt(va_list args, char *buf, unsigned int ibuf);
int print_oct(va_list args, char *buf, unsigned int ibuf);
int print_hex(va_list args, char *buf, unsigned int ibuf);
int print_upx(va_list args, char *buf, unsigned int ibuf);
int print_add(va_list args, char *buf, unsigned int ibuf);
int print_rev(va_list args, char *buf, unsigned int ibuf);
char *fill_binary_array(char *binary, long int int_in, int isnegative, int limit);
char *fill_oct_array(char *binary, char *oct);
char *fill_hex_array(char *binary, char *hex, int isupp, int limit);

#endif /* MAIN_H */
