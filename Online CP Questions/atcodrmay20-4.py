import sympy
n=int(input())
lis=[]
x=2
if sympy.prime(n):
	print(1)
else:
	while n>1:
		if n%x==0:
		    lis.append(x)
		    n/=x
		x+=1
    print(len(lis))


