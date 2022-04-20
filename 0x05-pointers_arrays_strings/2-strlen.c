#include "main.h"

[2;2R[3;1R[>77;30502;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
