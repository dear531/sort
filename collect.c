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

/* search function binary */
int binary(int *a, int n, int k)
{
	int low = 0, high = n - 1, mid;
	while(low <= high)
	{
		mid = low + ((high - low) / 2);
		if(a[mid] == k)
			return mid;
		else if(a[mid] > k)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if(low > high)
		return  -1;
	return -1;
}

int main(int argc, char *argv[])
{
	int a[] = {1, 3, 5, 7, 2, 4, 6, 8};
	int n = sizeof(a) / sizeof(*a);
	int i;
	int s = 5;
	insert(a, n);	
	for (i = 0; i < n; i++)
		printf("a[%d]:%d\n", i, a[i]);
	printf("search %d result %d\n",
			s, binary(a, n, s));
	return 0;
}
