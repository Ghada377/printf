#include "main.h"
/**
 * _printf - print function
 * @format: print string
 * Return: numbers that will be printed
 */
int _printf(const char *format, ...)
{
	int j = 0;
	int i = 0;
	int len = 0;
	va_list args;
	convert_match fun[] = {{'c', printf_c}, {'s', printf_s},
		{'%', print_37}, {'i', printf_int},
		{'d', printf_int}};
	va_start(args, format);
	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (j < 5)
			{
				if (format[i + 1] == fun[j].ch)
				{
					len += fun[j].f(args);
					i += 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

