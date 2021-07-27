#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *_itoa(int i, char *strout, int base)
{
  char *str = strout;
  int digit = 0;
  int sign = 0;
  if (i < 0)
  {
    sign = 1;
    i = i * -1;
  }
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
  if (sign == 1)
  {
    *str++ = '-';
  }
  *str = '\0';
  _strrev(strout);
  return strout;
}