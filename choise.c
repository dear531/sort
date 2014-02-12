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
