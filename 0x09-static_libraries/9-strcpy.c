#include "main.h"

/**
 * _strcpy - Copies a string in the given variable
 * @dest: is a pointer
 * @src: is a pointer
 *
 * Return: string copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
