#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: pointer to a file
 * @text_content: string to write on the file
 *
 * Return: Always 1 (success)
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;

	if (filename == NULL)
	{
		return (-1);

	}
	if (text_content == NULL)
	{
		ptr = open(filename, O_RDONLY | O_CREAT | O_TRUNC | O_WRONLY);

		return (1);

	}

	ptr = open(filename, O_RDONLY | O_CREAT | O_TRUNC | O_WRONLY);

	if (ptr == -1)
	{
		return (-1);

	}


	close(ptr);


	return (1);

}



