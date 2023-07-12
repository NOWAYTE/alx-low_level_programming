#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of file
 *
 * @filename: pointer to a file
 * @text_content: string to add at the end of the file 
 *
 * Return 1 (success)
 *
 */

int append_text_to_file(const char *filename,char *text_content)
{

	FILE *ptr;
	int i;


	if (filename == NULL)
	{
		return (-1);

	}
	
	if (text_content == NULL)
	{
		return (-1);

	}

	ptr = fopen(filename, "a");

	if (ptr == NULL)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		i++;

	}

	fwrite(text_content, sizeof(char), i, ptr);

	fclose(ptr);

	return (1);

}
