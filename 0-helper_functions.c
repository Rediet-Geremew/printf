#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @args: list of arguments
 * @characters_printed: pointer to the character count
 */
void print_char(va_list args, int *characters_printed)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	(*characters_printed)++;
}

/**
 * print_string - prints a string
 * @args: list of arguments
 * @characters_printed: pointer to the character count
 */
void print_string(va_list args, int *characters_printed)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			write(1, &(str[i]), 1);
			(*characters_printed)++;
		}
	}
}

/**
 * print_percent - prints a percent sign
 * @characters_printed: pointer to the character count
 */
void print_percent(int *characters_printed)
{
	char percent = '%';

	write(1, &percent, 1);
	(*characters_printed)++;
}
