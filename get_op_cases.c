#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void (*get_op_cases(char *format, int i))(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	int x = 0;

	ops array[] = {
		{"d", _printf_d},
		{"s", _printf_s},
		{"%", _printf_percent},
		{"c", _printf_char},
		{"i", _printf_int},
		{"u", _printf_unsigned},
		{"o", _printf_octal},
		{"x", _printf_lowehexa},
		{"X", _printf_upperhexa},
		{"p", _printf_address},
		{NULL, NULL}};

	while (array[x].cases != NULL)
	{
		if (*array[x].cases == format[i])
		{
			return (*array[x].function);
		}
		x++;
	}
	return (NULL);
}
