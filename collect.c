#include <stdio.h>
void bubble(int *a, int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j + 1] < a[j])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	return;
}
void choise(int *a, int n)
{
	int i, j, p, t;
	for (i = 1; i < n; i++)
	{
		p = i - 1;
		for (j = i; j < n; j++)
		{
			if (a[p] > a[j])
				p = j;
		}
		if (p != i - 1)
		{
			t = a[i - 1];
			a[i - 1] = a[p];
			a[p] = t;
		}
	}
	return;
}

void insert(int *a, int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		t = a[i + 1];
		for (j = i; j >= 0 && t < a[j]; j--)
			a[j + 1] = a[j];
		a[j + 1] = t;

	}
	return;
}

int main(int argc, char *argv[])
{
	int a[] = {1, 3, 5, 7, 2, 4, 6, 8};
	int n = sizeof(a) / sizeof(*a);
	int i;
	insert(a, n);	
	for (i = 0; i < n; i++)
		printf("a[%d]:%d\n", i, a[i]);
	return 0;
}
