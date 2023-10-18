#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @ch: type char pointer of the specifier i.e (l, h) for (d, i)
 * @f: type pointer to function for this conversion
 *
*/
struct format
{
char ch;
int (*f)(va_list);
};
/**
 * typedef struct format convert_match - Struct op
 *
 * @format: The format.
 * @convert_match: The function associated.
 */
typedef struct format convert_match;

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list args);
int print_37(va_list args);
int printf_int(va_list args);
int printf_s(va_list args);

#endif
