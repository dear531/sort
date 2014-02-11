#include <stdio.h>

#include "include.h"

#define array_size(a) (sizeof(a) / sizeof(*a))

int main(int argc, char* argv[])
{
	int i;
	int a[] = {1, 8, 7, 9, 2, 3, 4, 5, 6,};
	bubble(a, array_size(a));
	for (i = 0; i < array_size(a); i++)
		printf("a[%d] = %d\n", i, a[i]);
	return 0;
}
