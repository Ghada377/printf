#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* printf_c -  print character
* @args: input
* Return: char
*/
int printf_c(va_list args)
{
char C;

C = va_arg(args, int);
_putchar(C);
return (1);
}
