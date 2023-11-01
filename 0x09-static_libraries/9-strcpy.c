#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to by the src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int k = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for (; k < s; k++)
	{
		dest[k] = src[k];
	}
	dest[s] = '\0';
	return (dest);
}
