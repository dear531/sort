#if 0
void insert(int *a, int n)
{
	int i, j, t;
	for (i = 1;i < n; i++)
	{
		t = a[i];
		for (j = i - 1; j >= 0 && t < a[j]; j--)
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
