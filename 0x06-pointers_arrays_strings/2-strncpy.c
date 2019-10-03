iinclude "holberton.h"
/**
* _strncpy - This function will copy a string
* @dest: Destiny string
* @src: source string
* @n: number of n positions
* Return: will return the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
