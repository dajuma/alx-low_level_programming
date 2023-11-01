#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory where stored
 * @src: memory where copied
 * @n: number of bytes
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int a = 0;
        int b = n;

        for (; a < b; a++)
        {
                dest[a] = src[a];
                n--;
        }
        return (dest);
}
