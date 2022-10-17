#include "main.h"

/**
 * get_print_func - selects the correct function to perfrom the operation
 * @s: arg data type identifier
 * @index: index for arg data type identifier
 * Return: pointer to a function
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	int i = 0, j = 0, first_index;
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"o", print_oct}, {"u", print_unt},
		{"p", print_add}, {"x", print_hex}, {"X", print_upx},
		{"r", print_rev},
		{NULL, NULL}
	};

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
