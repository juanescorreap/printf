#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*  * _utoa - Function converts numbers to char.
* @i: unsigned integer to be converted to char.
* @strout: Pointer to string that holds the converted value.
* @base: Base of the numercial system.
* Return: pointer to converted values.
*/
char *_utoa(unsigned int i, char *strout, int base)
{
char *str = strout;
unsigned int digit = 0;
while (i)
{
digit = i % base;
if (digit > 9)
{
*str = 'A' + digit - 10;
}
else
{
*str = '0' + digit;
}
i = i / base;
str++;
}
*str = '\0';
_strrev(strout);
return (strout);
}
