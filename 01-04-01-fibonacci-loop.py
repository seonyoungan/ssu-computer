#loop
def fibo(n):
    if n <= 2:
        return 1
    else:
        a = 1
        b = 1
        for i in range(1, n):
            a, b= b, a+b
        return a

input = int(input("n = "))
print(fibo(input))