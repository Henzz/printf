#include "main.h"

int _putstr(char *stri)
{
    return  write(1, stri, _strlen(stri));
}
