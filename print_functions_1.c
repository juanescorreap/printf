#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf_d - Function that returns the sum of a and b
 * @format: Variable with value to be computed
 * @arguments: Variable with value to be computed
 * @buffer:
 *@
 * Return: int.
 */
void _printf_d(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_itoa(va_arg(arguments, int), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
void _printf_s(va_list arguments, char *buffer, char *strtmp, char *tmp,  int *j)
{
	tmp = tmp;

	strtmp = va_arg(arguments, char *);
	_strcpy(&buffer[*j], strtmp);
	*j = *j + _strlen(strtmp);
}
void _printf_percent(va_list arguments, char *buffer, char *strtmp, char *tmp, int *j)
{
	arguments = arguments;
	tmp = tmp;

	strtmp = "%";
	_strcpy(&buffer[*j], strtmp);
}
void _printf_char(va_list arguments, char *buffer, char *strtmp, char *tmp, int *j)
{
	arguments = arguments;
	strtmp = strtmp;
	tmp = tmp;

	buffer[*j] = (char)va_arg(arguments, int);
}
void _printf_int(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_itoa(va_arg(arguments, int), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}