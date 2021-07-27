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
	char *strtmp;
	int i = 0, j = 0;
	char buffer[1024], tmp[32];
	va_list arguments;
	va_start(arguments, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			buffer[j] = format[i];
		}
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'd':
			{
				_itoa(va_arg(arguments, int), tmp, 10);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 's':
			{
				strtmp = va_arg(arguments, char *);
				_strcpy(&buffer[j], strtmp);
				j = j + _strlen(strtmp);
				break;
			}
			case '%':
			{
				strtmp = "%";
				_strcpy(&buffer[j], strtmp);
				break;
			}
			case 'c':
			{
				buffer[j] = (char)va_arg(arguments, int);
				break;
			}
			case 'i':
			{
				_itoa(va_arg(arguments, int), tmp, 10);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 'u':
			{
				_utoa(va_arg(arguments, unsigned), tmp, 10);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 'o':
			{
				_utoa(va_arg(arguments, unsigned), tmp, 8);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 'x':
			{
				_utoa(va_arg(arguments, unsigned), tmp, 16);
				strtmp = string_tolower(tmp);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 'X':
			{
				_utoa(va_arg(arguments, unsigned), tmp, 16);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			case 'p':
			{
				_utoa((unsigned int)va_arg(arguments, double), tmp, 16);
				strtmp = string_tolower(tmp);
				_strcpy(&buffer[j], tmp);
				j = j + _strlen(tmp);
				break;
			}
			}
		}
		i++;
		j++;
	}
	fwrite(buffer, j, 1, stdout);
	va_end(arguments);
	return (j);
}
