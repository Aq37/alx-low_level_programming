#include "main.h"

/**
  *_isalpha - checks for the alphabetic character
  *@c: The character to be checked
  *Return: if c is a letter ,0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && 'c' <= 'z'))
		return (1);
	else
		return (0);
}
