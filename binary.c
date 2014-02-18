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
