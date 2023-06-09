#include "main.h"
int main()
{
	int r;

	r = wildcmp("main.c", "*.c");

	printf("%d", r);

	return (0);
}
