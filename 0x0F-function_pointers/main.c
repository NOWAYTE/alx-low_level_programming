#include "function_pointers.h"
void print_name_as(char *name)
{
	printf("Hello, my nameis  %s", name);

}
int main()
{
	print_name("Bob", print_name_as);

	return (0);
}
