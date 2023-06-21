#include "function_pointers.h"
int is_98(int elem)
{
	return (98 == elem);
}

int main()
{
	int index;

	int array[5] = {0, 98, 98, 402, 1024};

	index = int_index(array, 5, is_98);
	printf("%d", index);

	return (0);
}
