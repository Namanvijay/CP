s=input("Enter string:")
n=int(input(" No of Elements to remove "))

w=input("Elements to remove")
w=w.split(' ')
s=s.split(' ')

for i,j in enumerate(s):
	if j in w:
		s[i]="*"*len(j)
s=' '.join(s)
print(s)		
