#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
//set the pointer variable to the function arguments.
	va_list args;

//set a state to check when a '%' sign occurs.
	int state = 0;

//set a counter to store the string length of *format to use in the return statement.

	int count = 0;

//initialize the args pointer variable.
	va_start(args, format);


	while(*format)
	{
		if(state==0)
		{
			if(*format == '%')
			{
				state = 1;
			}
			else
			{
				_putchar(*format);
			}
		}
		else if (state == 1)
		{
			switch(*format)
			{
				case 'c':{
					_putchar(va_arg(args, int));
					break;
					 }
				case 's':{
					const char *s = va_arg(args, const char *);
					while(*s)
					{
						_putchar(*s++);
					}
					break;
					 }
				case 'd':{
					int dec = va_arg(args, int);
					if(dec < 0)
					{
						dec = -dec;
						_putchar('-');
					}
					_putstr(_convert(dec, 10));
					break;
					 }
				case 'u':{
					unsigned int ui = va_arg(args, unsigned int);
					_putstr(_convert(ui, 10));
					break;
					 }
				case 'b':{
					unsigned int bin = va_arg(args, unsigned int);
					_prtbin(bin);
					break;
					 }
				case 'o':{
					unsigned int oct = va_arg(args, unsigned int);
					_putstr(_convert(oct, 8));
					break;
					}
				case 'X':{
				       unsigned int heX = va_arg(args, unsigned int);
				       _putstr(_convert(heX, 16));
					break;
					}
				case 'x':{
					unsigned int hex = va_arg(args, unsigned int);
					_putstr(_convertLC(hex, 16));
					break;
					 }
				case 'r':{
					_revstr(args);;
					break;
					 }

				
				
			}
			state = 0;
					
		}
		format++;
		count++;
	}


	va_end(args);

	return count;
}
