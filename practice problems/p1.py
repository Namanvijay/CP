n=int(input("Enter no of strings   :"))


for i in range(n):
	s=input("")
	if i==0:
		cc=set(s)
	else:
		cc=cc&set(s)
print("Common characters is " ,cc)			