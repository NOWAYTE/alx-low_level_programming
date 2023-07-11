#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: pointer to a file
 *
 * @text_content: string to write 
 * 
 * Return: 1 (success)
 *
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int i = 0;
	FILE *ptr = NULL;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		ptr = fopen(filename, "w");

	}

	ptr = fopen(filename, "w");

	if (ptr == NULL)
	{
		return (-1);

	}

	for (len = 0; text_content[len] != '\0'; len++)
	{
		i = fwrite(text_content, len, 1, ptr);
		if (i == -1)
		{
			fclose(ptr);
			return (-1);

		}

	}

	fclose(ptr);

	return (-1);

}





