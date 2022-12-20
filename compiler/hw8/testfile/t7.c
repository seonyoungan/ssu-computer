int a[5];
void sort(int a[ ], int n) {
	int x, y, z;
	for (x=0; x<n; x++)
		for (y=x+1; y<n; y=y+1)
			if (a[x]<a[y]) {
				z=a[x]; a[x]=a[y]; a[y]=z;}
}


int main() {	
	int i;
	a[0] = 3;
	a[1] = 1;
	a[2] = 4;
	a[3] = 2;
	a[4] = 5;
	sort(a, 5);
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
