#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *string_tolower(char *tmp)
				{
					int a;
					for (a = 0; tmp[a] != '\0'; a++)
					{
						if (tmp[a] >= 65 && tmp[a] <= 90)
						{
							tmp[a] = tmp[a] + 32;
						}
					}
					return (tmp);
				}