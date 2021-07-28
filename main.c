#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("hola %c\n", 'c');
	len2 = printf("hola %c\n", 'c');
	fflush(stdout);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("hola %s\n", "Perrito");
	len2 = printf("hola %s\n", "Perrito");
	fflush(stdout);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}