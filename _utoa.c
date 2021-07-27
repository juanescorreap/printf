#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *_utoa(unsigned i, char *strout, int base)
{
  char *str = strout;
  unsigned digit = 0;

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
  return strout;
}