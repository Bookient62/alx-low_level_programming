#include "main.h"
#include <string>
/**
 * _strcat -> this function for more point and array
 * @dest: first param
 * @src: second param
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, 1;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
