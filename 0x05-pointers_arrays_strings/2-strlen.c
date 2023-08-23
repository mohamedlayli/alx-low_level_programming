#include "main.h"
/**
  * _strlen - Return the length of a string
  *
  * @s: string counter
  *
  * Return: Always void.
  */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		++len;
	}
	return (len);
}

