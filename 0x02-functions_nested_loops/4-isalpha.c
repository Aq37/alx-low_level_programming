#include "main.h"

/**
  *_isalpha - checks for the alphabetic character
  *@c: The character to be checked
  *Return: if c is a letter ,0 otherwise
  */
int _isalpha(int c)
{
	return((c >= 'a' && c <= z) || (c >= 'A' && c <= 'z'));
}
