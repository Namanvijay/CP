def gcd(a,b,c):
	if a%c==0 and b%c==0:
		return c
	else:
		 return gcd(a,b,c-1) 


x,y=input("Enter the no\n").split()
x,y=int(x),int(y)


z=gcd(x,y,min(x,y))
print(z)					 