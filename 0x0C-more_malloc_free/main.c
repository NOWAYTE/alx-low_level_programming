#include "main.h"
int main(void)
{
	char *c;
	
	c = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", c);
	free(c);

	return (0);
}

