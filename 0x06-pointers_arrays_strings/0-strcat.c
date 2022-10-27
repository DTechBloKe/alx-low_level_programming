#include "main.h"


/**
* strcat - concatenates two strings
* @dest: copy to
* @src: The source string to be appended to @dest
* @Return: A pointer to the destination
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
