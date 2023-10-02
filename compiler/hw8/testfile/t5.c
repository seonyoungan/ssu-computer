void main()
{
	int *a;
	int count;
	int i;
	count = 10;
	a = malloc(sizeof(int) *count);
	for (i = 0; i < count; ++i)
	{
		a[i] = i;
	}
	for (i = 0; i < count; ++i)
	{
		printf("number[%d] : %d\n", i + 1, *(a + i));
	}
}
