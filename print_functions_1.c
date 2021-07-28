#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf_d - Function pointed to to assist in print a decimal
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_d(va_list arguments, char *buffer, char *tmp,
char *strtmp, int *j)
{
	strtmp = strtmp;

	_itoa(va_arg(arguments, int), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
/**
 * _printf_s - Function pointed to to assist in print a string
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_s(va_list arguments, char *buffer, char *strtmp, char *tmp,
int *j)
{
	tmp = tmp;

	strtmp = va_arg(arguments, char *);
	if (strtmp == (char *)0)
	{
		strtmp = "(null)";
	}
	_strcpy(&buffer[*j], strtmp);
	*j = *j + _strlen(strtmp);
}
/**
 * _printf_percent - Function pointed to to assist in print a %
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_percent(va_list arguments, char *buffer, char *strtmp, char *tmp,
int *j)
{
	arguments = arguments;
	tmp = tmp;

	strtmp = "%";
	_strcpy(&buffer[*j], strtmp);
	*j = *j + _strlen(strtmp);
}
/**
 * _printf_char - Function pointed to to assist in print a char
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_char(va_list arguments, char *buffer, char *strtmp, char *tmp,
int *j)
{
	arguments = arguments;
	strtmp = strtmp;
	tmp = tmp;

	buffer[*j] = (char)va_arg(arguments, int);
}
/**
 * _printf_int - Function pointed to to assist in printing an int
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_int(va_list arguments, char *buffer, char *tmp, char *strtmp,
int *j)
{
	strtmp = strtmp;

	_itoa(va_arg(arguments, int), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
