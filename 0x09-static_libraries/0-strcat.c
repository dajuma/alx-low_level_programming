#include "main.h"
/**
 * _strcat - is a function that concatenates tow strings
 * @dest: value
 * @src: value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
        int s;
        int t;

        s = 0;

        while (dest[s] != '\0')
        {
                s++;
        }
        t = 0;

        while (src[t] != '\0')
        {
                dest[s] = src[t];
                s++;
                t++;
        }
        dest[s] = '\0';
        return (dest);
}
