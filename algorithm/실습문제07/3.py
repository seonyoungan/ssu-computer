a = 1000 - int(input())
b=[500, 100, 50, 10,5,1]
count=0
for i in b:
    count+=a
    a%=i
print(count)