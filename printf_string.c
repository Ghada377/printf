#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* printf_s - that prints characters array
* @args: this is a list
* Return: int
*/
int printf_s(va_list args)
{
char *S;
int i, len;

S = va_arg(args, char *);
if (S == NULL)
{
S = "(null)";
len = _strlen(S);
while (i < len)
{
_putchar(S[i]);
i++;
}

return (len);
}
else
{
len = _strlen(S);
for (i = 0; i < len; i++)
{
_putchar(S[i]);
}
return (len);
}
}

