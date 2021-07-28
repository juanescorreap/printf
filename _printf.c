#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf - Function that  that prints anything.
 * @format:  Character string.
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{

	va_list arguments;
	char *strtmp = "";
	int index_i = 0;
	int index_j = 0;
	int *i = &index_i, *j = &index_j;
	char buffer[1536], tmp[32];
	void (*pointerf)(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);

	va_start(arguments, format);

	while (format && format[*i])
	{
		if (format[*i] != '%')
		{
			buffer[*j] = format[*i];
		}
		if (format[*i] == '%')
		{
			(*i)++;

			pointerf = get_op_cases((char *)format, *i);
			if (pointerf == NULL)
			{
				return (-1);
			}
			pointerf(arguments, buffer, tmp, strtmp, j);
		}
		(*i)++;
		(*j)++;
	}
	fwrite(buffer, *j, 1, stdout);
	va_end(arguments);
	return (*j);
}
