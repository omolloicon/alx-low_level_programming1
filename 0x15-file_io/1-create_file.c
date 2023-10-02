#include "main.h"

/**
 * create_file - program to come up with a file
 * @filename: name of the file.
 * @text_content: what is in the file
 * Return: 1 if success, else -1.
 */

int create_file(const char *filename, char *text_content)
{
	int nav, cap_l, writeover;

	if (!filename)
		return (-1);
	nav = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (nav == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (cap_l = 0; text_content[cap_l]; cap_l++)
		;
	writeover = write(nav, text_content, cap_l);
	if (writeover == -1)
		return (-1);
	close(nav);
	return (1);
}
