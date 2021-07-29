#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf_unsigned - Function pointed to to assist in print a unsigned int
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_unsigned(va_list arguments, char *buffer, char *tmp, char *strtmp,
int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned int), tmp, 10);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
/**
 * _printf_octal - Function pointed to to assist in print an octal
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_octal(va_list arguments, char *buffer, char *tmp, char *strtmp,
int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned int), tmp, 8);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
/**
 * _printf_lowehexa - Function pointed to to assist in
 * printing an hexadecimal in lowecase
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_lowehexa(va_list arguments, char *buffer, char *tmp, char *strtmp,
int *j)
{
	_utoa(va_arg(arguments, unsigned int), tmp, 16);
	strtmp = string_tolower(tmp);
	_strcpy(&buffer[*j], strtmp);
	*j = *j + _strlen(tmp);
}
/**
 * _printf_upperhexa - Function pointed to to assist in
 * printing an hexadecimal in uppercase
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_upperhexa(va_list arguments, char *buffer, char *tmp,
char *strtmp, int *j)
{
	strtmp = strtmp;

	_utoa(va_arg(arguments, unsigned int), tmp, 16);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}
/**
 * _printf_address - Function pointed to to assist in
 * printing a memory address
 * @arguments: variadic arguements
 * @buffer: array in which what is to be printed is allocated
 * @tmp: array to hold values temporarily
 * @strtmp:Pointer to hold values temporarily
 * @j:index that holds the position on buffer
 * Return: Void.
 */
void _printf_address(va_list arguments, char *buffer, char *tmp, char *strtmp,
int *j)
{
	strtmp = strtmp;

	_utoa((unsigned int)va_arg(arguments, double), tmp, 16);
	strtmp = string_tolower(tmp);
	_strcpy(&buffer[*j], tmp);
	*j = *j + _strlen(tmp);
}