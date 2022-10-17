#include "main.h"

void _prtbin(unsigned int integer)
{
    int i = CHAR_BIT + sizeof integer - 4; /* however many bits are in an integer */
    
    while(i--) {
	_putchar('0' + ((integer >> i) & 1));
    }
;
}
