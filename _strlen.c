#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _strlen - returns length
 * @s: astring
 * * * Return: the string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
