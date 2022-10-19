#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_address - prints address to hexa format
 * @l: va_list arg
 * @f: pointer to struc
 * Return: number of char
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
