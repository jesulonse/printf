#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * reset_buffer - function that initialize and reset a buffer
 * @buffer: buffer size
 */

void reset_buffer(char *buffer)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	buffer[i] = '\0';
}
