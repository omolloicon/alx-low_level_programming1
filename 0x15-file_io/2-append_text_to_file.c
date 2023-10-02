#include "main.h"

/**
 * append_text_to_file - program to append file content
 * @filename: the name to the file
 * @text_content: what is in file
 * Return: 1 if succes, else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int map, amount, reads;

	if (!filename)
		return (-1);
	map = open(filename, O_WRONLY | O_APPEND);
	if (map == -1)
		return (-1);
	if (text_content)
	{
		for (amount = 0; text_content[amount]; amount++)
			;
		reads = write(map, text_content, amount);
		if (reads == -1)
			return (-1);
	}
	close(map);
	return (1);
}
