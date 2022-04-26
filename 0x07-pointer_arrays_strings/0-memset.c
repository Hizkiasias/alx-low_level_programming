#include "main.h"

/**
 *_memset -files string with constant char b upto n bytes
 *@s: input pointer to  string 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i<n)
	{
		s[i] = b;
		i++;

	}
	return (s);
}
