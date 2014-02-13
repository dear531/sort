#if 0
void choise(int *a, int n)
{
	int i, j, p, t;
	for(i = 0;i < n - 1; i++)
	{
		p = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[p] > a[j])
				p = j;
		}
		if(p != i)
		{
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
	return;
}
#else
void choise(int *a, int n)
{
	int i, j, p, t;
	for(i = 0;i < n - 1; i++)
	{
		p = n - 1 - i;
		for(j = 0; j < n - 1 - i; j++)
		{
			if(a[p] < a[j])
				p = j;
		}
		if(p != n - 1 - i)
		{
			t=a[n - 1 - i];
			a[n - 1 - i]=a[p];
			a[p]=t;
		}
	}
	return;
}
#endif
