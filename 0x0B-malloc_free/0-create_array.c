#include "holberton.h"
#include <stdlib.h>
/**
* 
*/
char *create_array(unsigned int size, char c)
{
    char *p;
    unsigned int i;

    if (size == 0 || size == NULL)
    {
        return (NULL);
    }
    p = malloc(sizeof(char) * size);
    for (i = 0; i < size; i++)
    {
        p[i] = c;
    }
    return (p);
}