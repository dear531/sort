#include <stdio.h>

#include "head.h"
#include "search.h"

#define array_size(a) (sizeof(a) / sizeof(*a))

int main(int argc, char* argv[])
{
	int i;
	int a[] = {1, 8, 7, 9, 2, 3, 4, 5, 6,};
	insert(a, array_size(a));
	for (i = 0; i < array_size(a); i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("result:%d\n", binary(a, array_size(a), 5));
	return 0;
}
