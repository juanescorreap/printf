/*
* File: _printf.c
* Auth: Andrés Medina, Juan Esteban Correa Pérez, Pablo Garcia
* Date: July 28, 2021
*/
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
	char *strtmp = NULL;
	int index_i = 0, index_j = 0;
	int *i = &index_i, *j = &index_j;
	char buffer[4000], tmp[250];
	void (*pointerf)(va_list, char *, char *, char *, int *);

	if (format == NULL || arguments == NULL || (format[0] == '%' &&
	format[1] == '\0'))
	{
		return (-1);
	}
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
				(*i)--;
				buffer[*j] = '%';
			}
			else
			{
				pointerf(arguments, buffer, tmp, strtmp, j);
			}
		}
		(*i)++;
		(*j)++;
	}
	fwrite(buffer, *j, 1, stdout);
	va_end(arguments);
	return (*j);
}
