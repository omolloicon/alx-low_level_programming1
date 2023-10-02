#include "main.h"

/**
 * read_textfile - print text to posix standard output
 * @filename: our file name to obtain data from
 * @letters: letter count
 * Return: succes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int nav;
	ssize_t capa, capb;
	char *mem;

	if (filename == 0)
		return (0);
	nav = open(filename, O_RDONLY);
	if (nav == -1)
		return (0);
	mem = malloc(sizeof(char) * letters);
	if (mem == NULL)
	{
		close(nav);
		return (0);
	}
	capa = read(nav, mem, letters);
	close(nav);
	if (capa == -1)
	{
		free(mem);
		return (0);
	}
	capb = write(STDOUT_FILENO, mem, capa);
	free(mem);
	if (capa != capb)
		return (0);
	return (capb);
}
