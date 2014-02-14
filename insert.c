#if 1
void insert(int *a, int n)
{
	int i, j, t;
	for (i = 0;i < n - 1; i++)
	{
		t = a[i + 1];
		for (j = i; j >= 0 && t < a[j]; j--)
			a[j + 1] = a[j];
		a[j + 1] = t;
	}
	return;
}
#else
void insert(int *a, int n)
{
	int i, j, t;
	for (i = 1;i < n; i++)
	{
		t = a[n - 1 - i];
		for (j = n - i; j < n - 1 && t > a[j]; j++)
			a[j - 1] = a[j];
		a[j - 1] = t;
	}
	return;
}
#endif
