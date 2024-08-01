#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_integer - prints an integer
 * @n: the interger to be printed
 *
 * Return: number of characters printed
 */
int print_integer(int n)
{
	int character_count = 0;
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		character_count++;
		number = -n;
	}
	else
	{
		number = n;
	}
	if (number / 10)
	{
		character_count += print_integer(number / 10);
	}
	_putchar((number % 10) + '0');
	character_count++;
	return (character_count);
}
