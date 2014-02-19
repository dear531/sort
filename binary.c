int binary(int *a, int n, int k)
{
	int high, low, mid;
	for (low = 0, high = n - 1, mid = (n - 1) / 2;\
			high >= low; mid = (high + low) / 2)
	{
		if (a[mid] == k)
			return mid;
		else if(a[mid] > k)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}
