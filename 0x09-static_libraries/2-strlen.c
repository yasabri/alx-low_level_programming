#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: (0) success
 */
int _strlen(char *s)
{
        int x = 0;

        for (; *s++;)
                x++;
        return (x);
}

