'''
   Problem: Coronavirus Spread
   CodeChef Long May2020
'''
t=int(input())
for _ in range(t):
	n=int(input())
	a=list(map(int,input().split()))
	check=[0 for i in range(n)]


	for i in range(1,n):
		temp=1
		ii=i
		while (ii < n) and ((a[ii]-a[ii-1]) <= 2 ) :
			temp+=1
			ii+=1

		if a[i-1]-a[i-2] <= 2 and i>1:
			check[i-1]=check[i-2]
		else:
			check[i-1]=check[i-1]+temp


	check[n-1]=1 if ((a[n-1]-a[n-2])>2) else (check[n-2])
	print(str(min(check))+" "+str(max(check)))