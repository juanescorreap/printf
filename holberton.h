#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
char *_itoa(int i, char *strout, int base);
char *_utoa(unsigned int i, char *strout, int base);
char *_strrev(char *str);
char *string_tolower(char *tmp);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void (*get_op_cases(char *, int))(va_list, char *, char *, char *, int *);
void _printf_d(va_list, char *, char *, char *, int *);
void _printf_s(va_list, char *, char *, char *,  int *);
void _printf_percent(va_list, char *, char *, char *, int *);
void _printf_char(va_list, char *, char *, char *, int *);
void _printf_int(va_list, char *, char *, char *, int *);
void _printf_unsigned(va_list, char *, char *, char *, int *);
void _printf_octal(va_list, char *, char *, char *, int *);
void _printf_lowehexa(va_list, char *, char *, char *, int *);
void _printf_upperhexa(va_list, char *, char *, char *, int *);
void _printf_address(va_list, char *, char *, char *, int *);
/**
 * struct options - struct with elements
 * @cases: Pointer to char next to where % was found
 * @function: Pointer to function that will be passed
 * to perform printing
 * Return: Void
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
typedef struct options
{
char *cases;
void (*function)(va_list, char *, char *, char *, int *);
} ops;
#endif
