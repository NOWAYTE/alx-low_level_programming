#include "function_pointers.h"
void print_elem(int elem)
{
	printf("%d", elem);

}
int main()
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);

	return (0);
}
