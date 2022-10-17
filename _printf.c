#include "main.h"

int _printf(const char *format, ...)
{
//set the pointer variable to the function arguments.
	va_list args;

//set a state to check when a '%' sign occurs.
	int state = 0;

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
			}
			state = 0;
					
		}
		format++;
	}
	va_end(args);

	return _strlen(format);
}
