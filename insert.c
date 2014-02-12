void insert(int *a, int n)
{
	int i, j, t;
	for(i = 1;i < n; i++)
	{
		t = a[i];
		j = i-1;
		while(j >= 0 && t < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = t;
	}
	return;
}
