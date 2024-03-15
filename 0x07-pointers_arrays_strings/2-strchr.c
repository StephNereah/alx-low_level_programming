#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to object.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return NULL;
}
