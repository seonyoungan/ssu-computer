int main() {
	int x, y, temp;
	scanf("%d %d", &x, &y);
	
	temp = x;
	x = y;
	y = temp;

	printf("%d %d\n", x, y);

	return 0;
}
