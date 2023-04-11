#include <stdlib.h>
#include "main.h"

/**
 * get_word_count - Calculate the number of words.
 * @str: The string of words.
 *
 * Return: The word count.
*/

int get_word_count(char *str)
{
	int i, count = 0,
	is_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (str[i] == ' ')
		{
			is_word = 0;
		}
	}

	return (count);
}

/**
 * get_word_length - Get the length of the string.
 * @str: The string.
 * @start_index: Initial position of the string.
 *
 * Return: The lenth of the string.
*/

int get_word_length(char *str, int start_index)
{
	int i, length = 0;

	for (i = start_index; str[i] != ' ' && str[i] != '\0'; i++)
		length++;

	return (length);
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 *
 * Return: Words, or NULL if str == NULL/"", or () fails.
*/

char **strtow(char *str)
{
	char **words; int i, j, num_words, word_length = 0, word_start = 0, word_index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = get_word_count(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_length++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				for (j = 0; j < word_length; j++)
					words[word_index][j] = str[word_start + j];
				words[word_index][word_length] = '\0';
				word_length = 0;
				word_start = i + 1;
				word_index++;
			}
		}
		else
		{
			word_start++;
		}
	}
	words[num_words] = NULL;
	return (words);
}
