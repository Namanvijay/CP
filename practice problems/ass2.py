n=int(input("Enter rows"))

for i in range(n):
	for j in range(i,n-1):
		print(" ", end="")
for i in range(n):
	for j in range((2*i)+1):
		print("*", end= "")
	print("\n")		 	 
				