#include "main.h"

/**
 * _strncat - Concatenates two strings using
 * inputted number of bytes from src.
 * @dest: pointer to destination to be appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int array = 0, d_count = 0;

	while (dest[array++])
	{
		d_count++;
	}

	for (array = 0; src[array] && aray < n; array++)
	{
		dest[d_count++] = src[array];
	}

	return (dest);
}
