#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format.
 * @format: format string containing the characters and the specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *fpointer;
	int characters_printed = 0;
	va_list args;

	va_start(args, format);

	for (fpointer = format; *fpointer != '\0'; fpointer++)
	{
		if (*fpointer == '%')
		{
			fpointer++;
			switch (*fpointer)
			{
			case 'c':
				print_char(args, &characters_printed);
				break;
			case 's':
				print_string(args, &characters_printed);
				break;
			case '%':
				print_percent(&characters_printed);
				break;
			default:
				write(1, fpointer, 1);
				characters_printed++;
				break;
			}
		}
		else
		{
			write(1, fpointer, 1);
			characters_printed++;
		}
	}
	va_end(args);
	return (characters_printed);
}
