#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_char(va_list args, int *characters_printed);
int print_string(va_list args, int *characters_printed);
void print_percent(int *characters_printed);
void print_integer(va_list args, int *characters_printed);

#endif /* MAIN_H */
