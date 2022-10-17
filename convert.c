#include "main.h"

char *_convert(unsigned int num, int base)
{
static char Representation[]= "0123456789ABCDEF";
static char buffer[50];
char *ptr;

ptr = &buffer[49];

*ptr = '\0';

do
{
	*--ptr = Representation[num%base];
	num /= base;
}while(num != 0);

	return(ptr);
}
