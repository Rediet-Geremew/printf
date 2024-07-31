#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * @characters_printed: pointer to the character count
 */
void print_integer(va_list args, int *characters_printed)
{
	int i;

	i = va_arg(args, int);
	write(1, &i, 1);
	(*characters_printed)++;
}
