int z(int, char);

int main()
{
	int b;
	char ch;
	int (*fp)(int, char);
	fp = z;
	fp(b, ch);
	z(b, ch);
	
	return 0;
}

int a(int d, char c)
{
	return 0;
}
