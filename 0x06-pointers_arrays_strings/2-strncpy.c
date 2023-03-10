#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: buffer storing string copy
 * @src: the string being copied
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
