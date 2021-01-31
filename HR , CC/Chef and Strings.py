for _ in range(int(input())):
	n=int(input())
	ar=list(map(int,input().split()))
	totalSkip=0

	for i in range(1,n):
		totalSkip+=abs(ar[i]-ar[i-1]-1)

	print(totalSkip)