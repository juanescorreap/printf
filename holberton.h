#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
char * _itoa(int i, char *strout, int base);
char *_utoa(unsigned i, char *strout, int base);
char *_strrev (char *str);
char *string_tolower(char *tmp);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void (*get_op_cases(char *format, int i))(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_d(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_s(va_list arguments, char *buffer, char *strtmp, char *tmp,  int *j);
void _printf_percent(va_list arguments, char *buffer, char *strtmp, char *tmp, int *j);
void _printf_char(va_list arguments, char *buffer, char *strtmp, char *tmp, int *j);
void _printf_int(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_unsigned(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_octal(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_lowehexa(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_upperhexa(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);
void _printf_address(va_list arguments, char *buffer, char *tmp, char *strtmp, int *j);

typedef struct options
{
char *cases;
void (*function)(va_list arguments, char *buffer, char *tmp, char *strmp, int *j);
} ops;
#endif