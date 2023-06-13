#include "main.h"
int main()
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("Failed \n ");

		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
