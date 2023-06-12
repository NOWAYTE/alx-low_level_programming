#include "main.h"
int main()
{
	char *buffer;

	buffer = create_array(98, 'H');
	
	if (buffer == NULL)
	{
		printf("Failed to allocate memory");

		return (1);
	}
	free(buffer);

	return (0);
}
