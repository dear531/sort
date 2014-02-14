#if 1
void choise(int *a, int n)
{
	int i, j, p, t;
	for(i = 1;i < n; i++)
	{
		p = i - 1;
		for(j = i; j < n; j++)
		{
			if(a[p] > a[j])
				p = j;
		}
		if(p != i - 1)
		{
			t=a[i - 1];
			a[i - 1]=a[p];
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
