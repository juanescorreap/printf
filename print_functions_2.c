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
void _printf_unsigned(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
void _printf_octal(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned), tmp, 8);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
void _printf_lowehexa(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	_utoa(va_arg(arguments, unsigned), tmp, 16);
	strtmp = string_tolower(tmp);
	_strcpy(&buffer[*j], strtmp);
	*j = *j + _strlen(tmp);
}
void _printf_upperhexa(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned), tmp, 16);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
void _printf_address(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j)
{
	strtmp = strtmp;

	_utoa((unsigned int)va_arg(arguments, double), tmp, 16);
	strtmp = string_tolower(tmp);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}