
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int p_front_cn(int a[], int l , int h )// equal to the left
{
	int pivot = a[l];
	int count = 0;
	for (int i = l + 1 ; i <= h; i++)
	{if (a[i] <= pivot) count++; }

	swap(&a[l], &a[l + count]);
	pivot = a[l + count];
	int i = l ; int j = l + count + 1;
	while (i < l + count && j <= h)
	{
		if (a[i] <= pivot)i++;
		else if (a[j] > pivot)j++;
		else
		{
			swap ( &a[i] , &a[j]); i++ ; j++;
		}
	}
	return l + count;
}
int p_back_clrs(int a[],  int l , int h)
{
	int pivot = a[h];
	int i = l - 1;
	for (int j = l ; j < h ; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(&a[j], &a[i]);
		}
	}
	swap(&a[h], &a[i + 1]);
	return i + 1;
}
int p_front_clrs(int a[] , int l , int h)
{
	int pivot = a[l];

	int i = h + 1;

	for (int j = h; j > l ; j--)
	{
		if (a[j] > pivot)
		{
			i--;
			swap(&a[j], &a[i]);
		}
	}
	swap(&a[l] , &a[i - 1]);
	return i - 1;

}
void QuickSort(int a[], int s, int e)
{
	if (s >= e)
		return;
	 //int p = p_front_cn(a, s, e);
	//int p = p_front_clrs(a, s, e);
	int p = p_back_clrs(a, s, e);

	QuickSort(a, s, p - 1);
	QuickSort(a, p + 1, e);


}
void quickSort(int input[], int size) {

	int start = 0;
	int end = size - 1;

	QuickSort(input, start, end);

}
