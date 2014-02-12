#include <stdio.h>

void bubble(int *a, int n)
{
	int i, j, t, swp = 0;
	for(i = 0; i < n - 1 && !swp; i++)
	{
		swp = 1;
		for(j = 0; j < n - 1 - i; j++)
		{
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				swp = 0;
			}
		}
	}
	return;
}
