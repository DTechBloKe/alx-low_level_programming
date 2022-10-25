#include "main.h"

/**
* _strlen - return the lenght of a string
* @s: string
* return: lenght
*/
int_strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
