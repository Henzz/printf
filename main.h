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
/* Struct array of data identifiers and functions*/
int ev_print_func(const char *s, int index);
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
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int prinlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinnhex(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *binary, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *binary, char *hex, int isupp, int limit);

#endif /* MAIN_H */
