#include "main.h"

/**
 *_strcat - Concatenates the string pointed to by @src,
 *          to the end of the string pointed to by @dest.+ terminating null byt
 *          at the end
 * @dest: pointer to the string to be concatenated upon.
 * @src: pointer to source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int array = 0, d_count = 0;

	while (dest[array++])
	{
		d_count++;
	}

	for (array = 0; src[array]; array++)
	{
		dest[d_count++] = src[aray];
	}

	return (dest);
}
