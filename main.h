#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *str);
char *_convert(unsigned int num, int base);
int _putstr(char *stri);
void _prtbin(unsigned int integer);
char *_convertLC(unsigned int num, int base);
int _revstr(va_list l);
	
#endif
