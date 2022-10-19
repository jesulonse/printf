#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_flag - turns on flags if _printf finds
 * @s: char that has flag specifier
 * @f: pointer to struct flag
 * Return: 1 if a flag is found, otherwise 0
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
