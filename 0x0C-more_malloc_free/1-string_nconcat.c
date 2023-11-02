#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);

	if (n >= len1)
		n = len1;

		result = (char *)malloc(len1 + n + 1);

		if (result == NULL)
		{
			return NULL;
		}

		unsigned int a;

		for (a = 0; a < len1 && a < n; a++)
		{
			result[a] = s1[a];
		}

		unsigned int b;

		for (b = 0; b < n && s2[b] != '\0'; b++)
		{
			result[a] = s2[b];
			a++;
		}
		result[a] = '\0';
		return result;
}

