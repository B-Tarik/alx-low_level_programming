#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: string;
 */
char *cap_string(char *s)
{
	int i = 0;
	_Bool new_word = 1;

	while (s[i] != '\0')
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}

		new_word = (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '.');
		i++;
	}

	return s;
}
