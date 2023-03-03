#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes using rot13
 * @s: variable
 * Return: Always 0 (success)
 */

char *rot13(char *s)
{
	int i = 0, i2 = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN
OPQRSTUVWXYZ";
char alpha2[] = "nopqrstuvwxyzabcdefghijklm
NOPOQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
	for (i2 = 0; i2 <= 52; i2++)
	{
	if (*(s + i) == alpha[i2])
	{
	*(s + i) = alpha2[i2];
	break;
	}
	}
	i++;
	}
	return (s);
}

