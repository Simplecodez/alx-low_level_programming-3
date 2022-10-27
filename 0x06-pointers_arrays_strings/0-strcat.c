#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two string
 * @dest: first string is stored in this variable
 * @src: second string is stored in this variable
 * Return: returns null
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
printf("%s", dest);
return dest;
}






