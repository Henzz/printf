#include "main.h"

int _strlen(const char *str)
{

        //IMPLEMENTING strlen() FUNCTION.

        int count;

        for(int j = 0; str[j] != '\0'; j++)
        {
                count = j;
        }

        return (count+1);
}
