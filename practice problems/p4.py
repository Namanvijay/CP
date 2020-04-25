l=[]
n=int(input())
for i in range(n):
	l.append(int(input()))
l.sort()
k=int(input("min no"))
print(l[k-1])	