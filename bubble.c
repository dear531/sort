#if 1
void bubble(int *a, int n)
{
	int i, j, t, swp = 1;
	for(i = 0; i < n - 1 && swp; i++)
	{
		swp = 0;
		for(j = 0; j < n - 1 - i; j++)
		{
			if(a[j + 1] < a[j])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
				swp = 1;
			}
		}
	}
	return;
}
#else
void bubble(int *a, int n)
{
	int i, j, t, swp = 1;
	for(i = 0; i < n - 1 && swp; i++)
	{
		swp = 0;
		for(j = n -1; j > i; j--)
		{
			if(a[j - 1] > a[j])
			{
				t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
				swp = 1;
			}
		}
	}
	return;
}
#endif
