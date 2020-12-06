for _ in range(int(input()):
	n=int(input())
	a=list(map(int,input().split()))

	if a[0]!=5:
		print("NO")
	else:
		chef_c=[0,0]

		for coin in a:
			if coin==5:
				chef_c[0]+=1
			elif coin == 10:
				if(chef_c[0]==0):
					print("NO")
					break
				else:
					chef_c[0]-=1
					chef_c[1]+=0
			else:
				if chef_c[1]>=1:
					chef_c[1]-=1
				elif chef_c[0]>=2:
					chef[c]-=2
				else:
					print("NO")
					break
		else:
			print("YES")
