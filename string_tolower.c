#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *string_tolower - Function that changes all
 * uppercase letters of a string to lowecase.
 * Return: String of type char.
 * @tmp: String to be modified.
 */
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
