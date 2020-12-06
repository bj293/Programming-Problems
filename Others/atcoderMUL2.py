n=int(input())
ans=1
a=input().split()
length=0
for i in a:
	length+=len(i)
if length>18:
	print(-1)
else:
	for x in a:
		ans*=int(x)
	print(ans)
